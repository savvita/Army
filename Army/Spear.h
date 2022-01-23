#pragma once
#include "Weapon.h"
class Spear :
    public Weapon
{
private:
    unsigned int length;

public:
    Spear() :length{ SPEAR_LENGTH }
    {
        this->damage = SPEAR_DAMAGE;
    }

    virtual unsigned int hit() const
    {
        return Weapon::hit() * this->length / 100;
    }

    virtual void getDamaged(const Weapon* weapon)
    {
        this->length -= weapon->hit() / 2;

        if (this->length < 0)
            this->length = 0;
    }
};

