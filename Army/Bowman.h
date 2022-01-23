#pragma once
#include "Soldier.h"
#include"Bow.h"

class Bowman :
    public Soldier
{
public:
	Bowman():Soldier()
	{
		this->weapon = new Bow();
	}
};

