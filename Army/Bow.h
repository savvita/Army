#pragma once
#include "Weapon.h"
#include"Quiver.h"

class Bow :
    public Weapon
{
private:
    Quiver* quiver;

public:
    Bow() :quiver{ new Quiver() }
    {

    }

    virtual unsigned int hit() const;

    ~Bow()
    {
        delete this->quiver;
    }
};
