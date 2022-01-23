#include <iostream>
#include"Figth.h"

int main()
{
	srand(time(0));
	//Soldier* s = new Bowman();
	//Soldier* s2 = new Horseman();
	////std::cout << *s << *s2;
	//Squad* sq1 = new Squad();
	//Squad* sq2 = new Squad();
	//sq1->addSoldier(new Bowman());
	//sq1->addSoldier(new Bowman());
	//sq2->addSoldier(new Horseman());
	//sq2->addSoldier(new Horseman());

	//for (size_t i = 0; i < 10; i++)
	//{
	//	sq1->attack(*sq2);
	//	if (sq2->isEmpty())
	//		break;
	//	sq2->attack(*sq1);

	//	if (sq1->isEmpty())
	//		break;
	//}

	Figth f;
	f.figth();
}