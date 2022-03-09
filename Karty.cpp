#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Karty{
public:

	struct karta{
		string lear;
		string value;
	};

	karta num1{"piki","6"};
	karta num2{"piki","7"};
	karta num3{"piki","8"};
	karta num4{"piki","9"};
	karta num5{"piki","10"};
	karta num6{"piki","Valet"};
	karta num7{"piki","Koroleva"};
	karta num8{"piki","Korol"};
	karta num9{"piki","Tus"};
	karta num10{"chevi","6"};
	karta num11{"chevi","7"};
	karta num12{"chevi","8"};
	karta num13{"chevi","9"};
	karta num14{"chevi","10"};
	karta num15{"chevi","Valet"};
	karta num16{"chevi","Koroleva"};
	karta num17{"chevi","Korol"};
	karta num18{"chevi","Tus"};
	karta num19{ "bubi","6" };
	karta num20{ "bubi","7" };
	karta num21{ "bubi","8" };
	karta num22{ "bubi","9" };
	karta num23{ "bubi","10" };
	karta num24{ "bubi","Valet" };
	karta num25{ "bubi","Koroleva" };
	karta num26{ "bubi","Korol" };
	karta num27{ "bubi","Tus" };
	karta num28{ "kresti","6" };
	karta num29{ "kresti","7" };
	karta num30{ "kresti","8" };
	karta num31{ "kresti","9" };
	karta num32{ "kresti","10" };
	karta num33{ "kresti","Valet" };
	karta num34{ "kresti","Koroleva" };
	karta num35{ "kresti","Korol" };
	karta num36{ "kresti","Tus" };

	int DeakСards[36][2]{};//заполним двумерный массив картами

	void creatDeak() {
		//составим в данном методе колоду из карт
		// и будим раздавать для старта игры, рандомно раздовать при помощи библиотеки "ctime" то есть при помощи пвсевдорандомных чисел раздаим игрокам карты
	}
	
	void compare() {
		//будем производить сравнение карт, выбрасываемых игроками
	}

	void addKart() {
		//добавляем карту если игроку если тот проиграл дуэль
	}

	void addKartFromDeak() {
		//добавление катр игроку если у него меньше шести карт(добавимь счётчики карт у игроков, которые будут следить за этим)
	}

	void brokenDeck() {
		//для сбора ипользованных карт
	}	
};

int main()
{
   
}