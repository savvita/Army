#include "Swordman.h"

std::ostream& Swordman::print(std::ostream& out) const
{
	out << "Swordman";
	return out;
}

Swordman::Swordman() :Soldier()
{
	this->weapon = new Sword();
}

unsigned int Swordman::getAtacked(const Soldier* soldier)
{
	unsigned int damage = 0;
	if (soldier->isAlive())
	{
		damage = ((Sword*)weapon)->defend(soldier->getWeapon());
		this->health -= damage;

		if (this->health < 0)
			this->health = 0;
	}

	return damage;
}
