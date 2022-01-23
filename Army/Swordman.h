#pragma once
#include "Soldier.h"
#include"Sword.h"

class Swordman :
    public Soldier
{
private:
	virtual std::ostream& print(std::ostream& out) const;
public:
	Swordman();

	virtual unsigned int getAtacked(const Soldier* soldier);
};

