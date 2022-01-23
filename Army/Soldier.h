#pragma once
#include"Weapon.h"
#include<iostream>

class Soldier
{
protected:
	int health;
	Weapon* weapon;

public:
	Soldier();

	virtual const Weapon* getWeapon() const;

	virtual unsigned int attack() const;

	virtual void getAtacked(const Soldier* soldier);

	bool isAlive() const;

	int getHealth() const;

	virtual ~Soldier();
};

