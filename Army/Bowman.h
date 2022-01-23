#pragma once
#include "Soldier.h"
#include"Bow.h"

class Bowman :
    public Soldier
{
public:
	Bowman();

	virtual unsigned int attack() const;

	virtual void getAtacked(const Soldier* soldier);
};

