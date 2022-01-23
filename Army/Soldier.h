#pragma once
#include"Weapon.h"

class Soldier
{
protected:
	int health;
	Weapon* weapon;

public:
	Soldier() :health{ HEALTH }, weapon{ nullptr }
	{

	}

	virtual const Weapon* getWeapon() const;

	virtual unsigned int attack() const;

	virtual void getAtacked(const Soldier* soldier);

	bool isAlive() const;

	int getHealth() const;

	virtual ~Soldier()
	{
		if (this->weapon != nullptr)
			delete this->weapon;
	}
};

