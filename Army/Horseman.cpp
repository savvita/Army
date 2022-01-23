#include "Horseman.h"

std::ostream& Horseman::print(std::ostream& out) const
{
	out << "Horseman";
	return out;
}

Horseman::Horseman() :Soldier()
{
	this->weapon = new Spear();
	this->horse = new Horse();
}

unsigned int Horseman::attack() const
{
	unsigned int dam = (this->horse->isAlive()) ? Soldier::attack() + HORSE_DAMAGE : Soldier::attack();
	return dam;
}

unsigned int Horseman::getAtacked(const Soldier* soldier)
{
	unsigned int damage = Soldier::getAtacked(soldier);

	this->horse->getDamaged(soldier);

	return damage;
}

Horseman::~Horseman()
{
	if (this->horse != nullptr)
	{
		delete this->horse;
	}
};
