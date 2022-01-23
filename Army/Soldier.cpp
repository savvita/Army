#include "Soldier.h"

Soldier::Soldier() :health{ HEALTH }, weapon{ nullptr }
{

}

const Weapon* Soldier::getWeapon() const
{
	return this->weapon;
}

unsigned int Soldier::attack() const
{
	if (this->isAlive() && this->weapon != nullptr)
	{
		return this->weapon->hit();
	}

    return 0;
}

void Soldier::getAtacked(const Soldier* soldier)
{
	if (soldier->isAlive())
	{
		this->health -= soldier->attack();

		if (this->health < 0)
			this->health = 0;

		if (this->weapon != nullptr)
			this->weapon->getDamaged(soldier->getWeapon()->getDamage());
	}
}

bool Soldier::isAlive() const
{
	return (this->health > 0);
}

int Soldier::getHealth() const
{
	return this->health;
}

Soldier::~Soldier()
{
	if (this->weapon != nullptr)
		delete this->weapon;
}
