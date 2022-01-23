#pragma once
#include "Soldier.h"
#include"Bow.h"

class Bowman :
    public Soldier
{
private:
	virtual std::ostream& print(std::ostream& out) const;
public:
	Bowman();
};

