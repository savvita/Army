#include "Squad.h"

bool Squad::isEmpty() const
{
	return (this->count == 0);
}

void Squad::addSoldier(Soldier* soldier)
{
	Soldier** tmp = new Soldier * [this->count + 1];

	for (unsigned int i = 0; i < this->count; i++)
	{
		tmp[i] = this->soldiers[i];
	}

	tmp[this->count] = soldier;

	if(this->soldiers)
		delete[] this->soldiers;

	this->soldiers = tmp;

	this->count++;
}

void Squad::deleteSoldier(unsigned int position)
{
	if (position < this->count)
	{
		Soldier** tmp = new Soldier * [this->count - 1];

		for (unsigned int i = 0; i < position; i++)
		{
			tmp[i] = this->soldiers[i];
		}

		for (unsigned int i = position + 1; i < this->count; i++)
		{
			tmp[i - 1] = this->soldiers[i];
		}

		delete[] this->soldiers;

		this->soldiers = tmp;

		this->count--;
	}
}

void Squad::attack(Squad& enemies) const
{
	if (this->isEmpty())
		return;

	for (unsigned int i = 0; i < this->count; i++)
	{
		if (enemies.isEmpty())
			break;

		int randomEnemy = rand() % enemies.getCount();
		enemies[randomEnemy]->getAtacked(this->soldiers[i]);

		if (!enemies[randomEnemy]->isAlive())
			enemies.deleteSoldier(randomEnemy);
	}
}

Soldier* Squad::operator[](unsigned int index)
{
	if (index >= this->count)
		return nullptr;

	return this->soldiers[index];
}

Squad::~Squad()
{
	if (this->soldiers)
		delete this->soldiers;
}
