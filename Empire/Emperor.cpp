#include "Emperor.h"

Emperor::Emperor(const char * _name, unsigned int _age):Swordsman(_name,_age)
{
}

void Emperor::Work()
{
	std::cout << "Ruling the empire!\n";
}

citizen Emperor::get() const
{
	return emperor;
}
