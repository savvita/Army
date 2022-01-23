#include "Bow.h"

unsigned int Bow::hit() const
{
    unsigned int damage = 0;

    if(!this->quiver->isEmpty())
    {
        Arrow* arrow = this->quiver->getArrow();
        damage = arrow->hit();
        delete arrow;
    }

    return damage;
}
