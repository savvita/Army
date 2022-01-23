#include "Horseman.h"

Horseman::Horseman() :Soldier()
{
	this->weapon = new Spear();
	this->horse = new Horse();
}

unsigned int Horseman::attack() const
{
	unsigned int dam = (this->horse->isAlive()) ? Soldier::attack() + HORSE_DAMAGE : Soldier::attack();
	std::cout << "Horseman attacks (damage " << dam << ")!\n";
	return dam;
}

void Horseman::getAtacked(const Soldier* soldier)
{
	Soldier::getAtacked(soldier);
	if (!this->isAlive())
		std::cout << "Horseman died\n";

	this->horse->getDamaged(soldier);

	if (!this->horse->isAlive())
		std::cout << "Horseman lose his horse\n";
}

Horseman::~Horseman()
{
	if (this->horse != nullptr)
	{
		delete this->horse;
	}
};
