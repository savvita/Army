#pragma once
#include"Weapon.h"
#include<iostream>

class Soldier
{
protected:
	int health;
	Weapon* weapon;

	virtual std::ostream& print(std::ostream& out) const;

public:
	Soldier();

	virtual const Weapon* getWeapon() const;

	virtual unsigned int attack() const;

	virtual unsigned int getAtacked(const Soldier* soldier);

	bool isAlive() const;

	int getHealth() const;

	friend std::ostream& operator<<(std::ostream& out, const Soldier& soldier);

	virtual ~Soldier();
};

