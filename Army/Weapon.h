#pragma once
#define HEALTH 100

#define WEAPON_DAMAGE 5
#define ARROW_DAMAGE 10
#define SPEAR_DAMAGE 10
#define SWORD_DAMAGE 15
#define HORSE_DAMAGE 2

#define SPEAR_LENGTH 200

#define ARROW_COUNT 20

class Weapon
{
protected:
	unsigned int damage;

public:
	Weapon() :damage{ WEAPON_DAMAGE }
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

