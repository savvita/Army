#pragma once
#include"Weapon.h"

class Horse
{
private:
	unsigned int health;
	unsigned int damage;

public:
	Horse() :health{ 100 }, damage{ 10 }
	{

	}

	virtual void getDamaged(const Weapon* weapon);
};

