#include "Horse.h"

void Horse::getDamaged(const Weapon* weapon)
{
	this->health -= weapon->hit();

	if (this->health < 0)
		this->health = 0;
}
