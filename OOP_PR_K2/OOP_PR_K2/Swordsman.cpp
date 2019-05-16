#include "Swordsman.h"

Swordsman::Swordsman(const char * _name, unsigned int _age):Soldier(_name,_age)
{
}

void Swordsman::Work()
{
	std::cout << "Swordsman fighting!\n";
}

citizen Swordsman::get() const
{
	return swordsman;
}
