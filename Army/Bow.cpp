#include "Bow.h"

Bow::Bow() :quiver{ new Quiver() }
{
}

unsigned int Bow::hit()
{
    unsigned int damage = 0;

    if(!this->quiver->isEmpty())
    {
        Arrow* arrow = this->quiver->getArrow();
        damage = arrow->hit();
        delete arrow;
    }
    this->damage = damage;

    return damage;
}

Bow::~Bow()
{
    delete this->quiver;
}
