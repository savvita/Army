#pragma once
#include "Weapon.h"
class Spear :
    public Weapon
{
private:
    int length;

public:
    Spear();

    virtual unsigned int hit();

    virtual void getDamaged(unsigned int damage);
};

