#include "Horse.h"

Horse::Horse() :health{ HEALTH }
{

}

bool Horse::isAlive() const
{
	return (this->health > 0);
}

void Horse::getDamaged(const Soldier* soldier)
{
	this->health -= soldier->getWeapon()->getDamage();

	if (this->health < 0)
		this->health = 0;
}
