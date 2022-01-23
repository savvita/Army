#pragma once
#include"Weapon.h"

class Horse
{
private:
	unsigned int health;
	unsigned int damage;

public:
	Horse() :health{ HEALTH }, damage{ HORSE_DAMAGE }
	{

	}

	virtual void getDamaged(const Weapon* weapon);
};

