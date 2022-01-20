#pragma once
class Weapon
{
protected:
	unsigned int damage;

public:
	Weapon() :damage{ 20 }
	{

	}

	inline unsigned int getDamage() const
	{
		return this->damage;
	}

	virtual unsigned int hit() const
	{
		return this->damage;
	}

	virtual void getDamaged(const Weapon* weapon)
	{

	}
};

