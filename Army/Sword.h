#pragma once
#include "Weapon.h"
class Sword :
    public Weapon
{
public:
    Sword()
    {
        this->damage = 120;
    }

    unsigned int defend(const Weapon* weapon) const
    {
        return weapon->getDamage() / 2;
    }

};

