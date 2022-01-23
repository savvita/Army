#pragma once
#include "Soldier.h"
#include"Spear.h"
#include"Horse.h"

class Horseman :
	public Soldier
{
protected:
	Horse* horse;
public:
	Horseman():Soldier()
	{
		this->weapon = new Spear();
		this->horse = new Horse();
	}

	virtual unsigned int attack() const;

	virtual void getAtacked(const Soldier* soldier);

	virtual ~Horseman();
};

