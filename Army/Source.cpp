#include <iostream>
#include "Swordman.h"
#include"Horseman.h"
#include"Bowman.h"
#include"Squad.h"

int main()
{
	Soldier* s = new Bowman();
	Soldier* s2 = new Horseman();
	Squad* sq1 = new Squad();
	Squad* sq2 = new Squad();
	sq1->addSoldier(s);
	sq1->addSoldier(s);
	sq2->addSoldier(s2);
	sq2->addSoldier(s2);

	for (size_t i = 0; i < 10; i++)
	{
		sq1->attack(*sq2);
		if (sq2->isEmpty())
			break;
		sq2->attack(*sq1);

		if (sq1->isEmpty())
			break;
	}
}