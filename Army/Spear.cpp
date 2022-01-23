#include "Spear.h"

Spear::Spear() :length{ SPEAR_LENGTH }
{
    this->damage = SPEAR_DAMAGE;
}

unsigned int Spear::hit()
{
    return Weapon::hit() * this->length / 100;
}

void Spear::getDamaged(unsigned int damage)
{
    this->length -= damage / 2;

    if (this->length < 0)
        this->length = 0;
}
