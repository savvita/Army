#pragma once
#include "Soldier.h"
#include"Sword.h"

class Swordman :
    public Soldier
{
public:
	Swordman();

	virtual void getAtacked(const Soldier* soldier);

	virtual unsigned int attack() const;

};

