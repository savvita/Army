#include"Bowman.h"

Bowman::Bowman() :Soldier()
{
	this->weapon = new Bow();
}

unsigned int Bowman::attack() const

{
	unsigned int dam = Soldier::attack();
	std::cout << "Bowman attacks (damage " << dam << ")!\n";
	return dam;
}

void Bowman::getAtacked(const Soldier* soldier)
{
	Soldier::getAtacked(soldier);

	if (!this->isAlive())
		std::cout << "Bowman died\n";
}
