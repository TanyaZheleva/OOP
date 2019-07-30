#include "Priest.h"

Priest::Priest(const char * _name, unsigned int _age):Slave(_name,_age)
{
}

void Priest::Work()
{
	std::cout << "Performing ritual!\n";
}

citizen Priest::get() const
{
	return priest;
}
