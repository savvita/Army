#pragma once
#include "Weapon.h"
class Spear :
    public Weapon
{
private:
    unsigned int length;

public:
    Spear() :length{ 200 }
    {
        this->damage = 75;
    }

    virtual unsigned int hit() const
    {
        return Weapon::hit() * this->length / 100;
    }

    virtual void getDamaged(const Weapon* weapon)
    {
        this->length -= weapon->hit() / 10;

        if (this->length < 0)
            this->length = 0;
    }
};

