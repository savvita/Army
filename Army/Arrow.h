#pragma once
#include<iostream>
#include"Weapon.h"
class Arrow :public Weapon
{
public:
	Arrow()
	{
		this->damage = ARROW_DAMAGE + (rand() % (ARROW_DAMAGE / 2));
	}
};

