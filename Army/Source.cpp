#include <iostream>
#include "Swordman.h"
#include"Horseman.h"
#include"Bowman.h"

int main()
{
	Soldier* s = new Bowman();
	Soldier* s2 = new Horseman();
	//std::cout<<s->attack() <<"\n";
	for (size_t i = 0; i < 30; i++)
	{
		std::cout<<"Atack Horseman: " << s2->attack() << "\n";
		s->getAtacked(s2);
		std::cout << "Bowman health: " << s->getHealth() << "\n";
		std::cout << "Horseman health: " << s2->getHealth() << "\n";
		s2->getAtacked(s);
		std::cout<< "Atack Bowman: " << s->attack()<<"\n";
		std::cout << "==================\n";
	}
}