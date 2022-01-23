#pragma once
#include "Weapon.h"
class Sword :
    public Weapon
{
public:
    Sword()
    {
        this->damage = SWORD_DAMAGE;
    }

    unsigned int defend(const Weapon* weapon) const
    {
        return weapon->getDamage() / 2;
    }

};

