#include "Swordman.h"

Swordman::Swordman() :Soldier()
{
	this->weapon = new Sword();
}

void Swordman::getAtacked(const Soldier* soldier)
{
	if (soldier->isAlive())
	{
		this->health -= ((Sword*)weapon)->defend(soldier->getWeapon());

		if (this->health < 0)
			this->health = 0;

		if (this->weapon != nullptr)
			this->weapon->getDamaged(soldier->getWeapon()->getDamage());
	}

	if (!this->isAlive())
		std::cout << "Swordman died\n";
}

unsigned int Swordman::attack() const
{
	unsigned int dam = Soldier::attack();
	std::cout << "Swordman attacks (damage " << dam << ")!\n";
	return dam;
}
