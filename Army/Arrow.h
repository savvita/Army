#pragma once
#include<iostream>
#include"Weapon.h"
class Arrow :public Weapon
{
public:
	Arrow()
	{
		this->damage = 40 + (rand() % 20);
	}
};

