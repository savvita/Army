#pragma once
#include<iostream>
#include"Soldier.h"

class Squad
{
private:
	Soldier** soldiers;
	unsigned int count;

public:
	Squad() : count{ 0 }, soldiers{ new Soldier * [count] }
	{

	}

	inline unsigned int getCount() const
	{
		return this->count;
	}

	bool isEmpty() const;

	void addSoldier(Soldier* soldier);

	void deleteSoldier(unsigned int position);

	void attack(Squad& enemies) const;

	Soldier* operator[](unsigned int index);

	~Squad();
};

