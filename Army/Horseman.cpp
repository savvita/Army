#include "Horseman.h"

unsigned int Horseman::attack() const
{
	
	return (this->horse->isAlive()) ? Soldier::attack() + HORSE_DAMAGE : Soldier::attack();
}

void Horseman::getAtacked(const Soldier* soldier)
{
	Soldier::getAtacked(soldier);
	this->horse->getDamaged(soldier);
}

Horseman::~Horseman()
{
	if (this->horse != nullptr)
	{
		delete this->horse;
	}
};
