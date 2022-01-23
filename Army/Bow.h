#pragma once
#include "Weapon.h"
#include"Quiver.h"

class Bow :
    public Weapon
{
private:
    Quiver* quiver;

public:
    Bow();

    virtual unsigned int hit();

    ~Bow();
};

