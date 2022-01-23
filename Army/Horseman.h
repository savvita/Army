#pragma once
#include "Soldier.h"
#include"Spear.h"
#include"Horse.h"

class Horseman :
	public Soldier
{
protected:
	Horse* horse;

	virtual std::ostream& print(std::ostream& out) const;
public:
	Horseman();

	virtual unsigned int attack() const;

	virtual unsigned int getAtacked(const Soldier* soldier);

	virtual ~Horseman();
};

