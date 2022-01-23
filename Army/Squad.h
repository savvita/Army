#pragma once
#include<iostream>
#include"Soldier.h"

class Squad
{
private:
	Soldier** soldiers;
	unsigned int count;
	std::string name;

public:
	Squad() : count{ 0 }, soldiers{ new Soldier * [count] }
	{

	}

	inline void setName(std::string& name)
	{
		this->name = name;
	}

	inline const std::string& getName() const
	{
		return this->name;
	}

	inline unsigned int getCount() const
	{
		return this->count;
	}

	bool isEmpty() const;

	void addSoldier(Soldier* soldier);

	void deleteSoldier(unsigned int position);

	void attack(Squad& enemies) const;

	void print() const;

	Soldier* operator[](unsigned int index);

	~Squad();
};

