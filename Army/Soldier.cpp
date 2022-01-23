#include "Soldier.h"

std::ostream& Soldier::print(std::ostream& out) const
{
	return out;
}

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

unsigned int Soldier::getAtacked(const Soldier* soldier)
{
	unsigned int damage = 0;
	if (soldier->isAlive())
	{
		damage = soldier->attack();
		this->health -= damage;

		if (this->health < 0)
			this->health = 0;

		if (this->weapon != nullptr)
			this->weapon->getDamaged(damage);
	}

	return damage;
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

std::ostream& operator<<(std::ostream& out, const Soldier& soldier)
{
	return soldier.print(out);
}
