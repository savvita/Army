#include"Bowman.h"

std::ostream& Bowman::print(std::ostream& out) const
{
	out << "Bowman";
	return out;
}

Bowman::Bowman() :Soldier()
{
	this->weapon = new Bow();
}
