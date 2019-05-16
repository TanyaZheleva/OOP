#include "Archer.h"

Archer::Archer(const char * _name, unsigned int _age):Soldier(_name,_age)
{
}

void Archer::Work()
{
	std::cout << "Archer fighting\n";
}

citizen Archer::get() const
{
	return archer;
}
