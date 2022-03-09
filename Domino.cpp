#include <windows.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Game {
public:

    int player_1[7][2]{},
        player_2[7][2]{},
        player_3[7][2]{},
        player_4[7][2]{};

    int arr[28][2]{},
        block[100]{};

    int countBlock = 0;

    // составление костей и их запись в дмерный массив для дальнейшей работы с ними
    void Bones(int x, int y, int k) {
        for (int i = k; i < k+1; ++i) {
            for (int j = 0; j < 2; ++j) {
                arr[i][j] = x;
                x = y;
            }
        } 
    }

    // все комбинаций костей  
    void partBones() {
        int con = -1;
        for (int leftSide = 0; leftSide <= 6; ++leftSide) {
            for (int rightSide = leftSide; rightSide <= 6; ++rightSide) {
                con++;
                Bones(leftSide,rightSide,con);
            }
        }
    }
    // вывод костей игроков в консоль 
    void Print(int (&players)[7][2]) {
        for (int i = 0; i < 7; ++i) {
            cout << "          ";
            for (int j = 0; j < 2; ++j) {
                cout << players[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // сравнение с заблокированными(которые уже раздали игрокам) костями 
    // Для того чтобы не допустить повторения костей у игроков
    bool compare(int num) {
        for (int q = 0; q < countBlock; ++q) {
            if (num == block[q]) {
                return true;
            }
        }
        return false;
    }

    // рандомное распределение всех костей между игроками 
    void BonesCreatForPlayers(int (&bonesPlayers)[7][2]) {
        srand(time(NULL));
        for (int i = 0; i < 7; ++i) {
            int RandomValueRow = rand() % 28;
            int RandomValueCol = rand() % 2;
            if(!compare(RandomValueRow)){
                for (int j = 0; j < 2; ++j) {
                    bonesPlayers[i][j] = arr[RandomValueRow][RandomValueCol];
                    block[countBlock++] = RandomValueRow;
                    if (RandomValueCol == 0) {
                        RandomValueCol++;
                    }
                    else {
                        RandomValueCol--;
                    }
                }
            }
            else {
                i--;
            }
        }  
    }

    // вывод как распределились кости между игроками
    void giveBones() {
        int r = 1;
        cout << "\tplayer_" << r++ << endl;
        BonesCreatForPlayers(player_1);
        Print(player_1);
        Sleep(3000);
        cout << "\tplayer_" << r++ << endl;
        BonesCreatForPlayers(player_2);
        Print(player_2);
        Sleep(3000);
        cout << "\tplayer_" << r++ << endl;
        BonesCreatForPlayers(player_3);
        Print(player_3);
        Sleep(3000);
        cout << "\tplayer_" << r << endl;
        BonesCreatForPlayers(player_4);
        Print(player_4);
        Sleep(3000);
    }

    int field[30]{};
    int len = 15;
    
    // ход первого игрока, чтобы начать игру
    void first() {
        for (int q = 0; q < 1; ++q) {
            for (int p = 0; p < 2; ++p) {
                field[len++] = player_1[q][p];
                player_1[q][p] = -1;
            }
        }
    }

    void Start(int (&ar)[7][2]) {
        int rs = 0;
        for (int q = 0; q < 1; ++q) {
            for (int p = 0; p < 2; ++p) {
                if (ar[q][p] != -1) {
                    if (compareBon(rs = ar[q][p],len)) {
                        field[len++] = ar[q][p];
                        ar[q][p] = -1;
                        // не обробатывать кости, которые игроки уже использовали
                        // задать условие так чтобы кость класть справа или слева в зависимоти от совпадения чисел на костях
                        // при необходимости перевернуть кость игрока, которую он хочет положить
                    }
                }
            }
        }
    }
    // не успел дописать методы 
    void call() {
        // вызов ходов игроков (вызов начала игры)
    }

    bool compareBon(int num3, int hz) {
        //сравнить чиселки уже лежащей в поле кости и той, котороую хочет положить игрок на поле
    }

    // вывод поля как сыграли игроки полную партию
    void PrintField() {
        for (int i = 0; i < 30; ++i) {
            cout << field[i] << " ";
        }
    }
};

int main()
{
    Game Domino;
    Domino.partBones();
    Domino.giveBones();
    cout << endl;
    Domino.call();
    cout << endl;
    Domino.PrintField();
}