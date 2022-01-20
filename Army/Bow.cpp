#include "Bow.h"

unsigned int Bow::hit() const
{
    unsigned int damage = 0;

    Arrow* arrow = this->quiver->getArrow();

    if (arrow!= NULL)
    {
        damage = arrow->hit();
        delete arrow;
    }

    return damage;
}
