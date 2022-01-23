#pragma once
#include"Weapon.h"
#include"Soldier.h"

class Horse
{
private:
	int health;

public:
	Horse();

	bool isAlive() const;

	virtual void getDamaged(const Soldier* soldier);
};

