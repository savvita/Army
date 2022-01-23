#include "Horse.h"

bool Horse::isAlive() const
{
	return (this->health > 0);
}

void Horse::getDamaged(const Soldier* soldier)
{
	this->health -= soldier->attack();

	if (this->health < 0)
		this->health = 0;
}
