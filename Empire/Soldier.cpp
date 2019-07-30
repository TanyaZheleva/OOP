#include "Soldier.h"

Soldier::Soldier(const char* _name,unsigned int _age):Slave(_name,_age)
{
}

void Soldier::Work()
{
	std::cout << "Fighting against enemy!\n";
}

citizen Soldier::get() const
{
	return soldier;
}
