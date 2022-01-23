#pragma once
#include "Soldier.h"
#include"Sword.h"

class Swordman :
    public Soldier
{
public:
	Swordman():Soldier()
	{
		this->weapon = new Sword();
	}
};

