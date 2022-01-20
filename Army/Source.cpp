#include <iostream>
#include"Bow.h"
#include"Horse.h"
#include"Spear.h"
#include"Sword.h"

int main()
{
	Spear s;
	s.getDamage();
	s.getDamaged(new Sword());
	s.hit();
}