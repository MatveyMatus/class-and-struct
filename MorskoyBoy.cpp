#include <iostream>
using namespace std;

class MorskoyBoy {
public:

    int field_1[10][10]{},
        field_2[10][10]{};

    // живучесть кораблей и их количество
    struct lifeShips {
        int life;
        int amountShips;

    };


    // заполнение(создание) поля первого и второго игрока 
    void fieldСreationForPlayers() {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                cout << field_1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;  
    }

    //созднаие живучести каждого вида коробля учитывая правила игры
    lifeShips torpedo_boat{1,4};
    lifeShips destroyer{2,3};
    lifeShips cruiser{3,2};
    lifeShips carrier{4,1};

    void dispositionBoards() {
        // формуруем расположение кораблей в поле то есть редактируем это поле
        // расположение коробля в какой-то ячейке обозначим как "1"
    }
   
    void playerTurn() {
        shipShots();// формуриум условия при попадонии в корабльи при промахе "выстрела", как отдельную метод "shipShots"  
        // поподание мимо корабля обозначим как "2", а поподание в  корабль как "3", учитывая живучесть каждого вида кораблей из структуры "lifeBoards"
    }

    void shipShots() {
        
    }
};

int main()
{
    MorskoyBoy players_1;
    MorskoyBoy players_2;
    cout << "    player_1" << endl;
    players_1.fieldСreationForPlayers();
    cout << "    player_2" << endl;
    players_2.fieldСreationForPlayers();
    
}