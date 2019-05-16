#include"Scholar.h"

Scholar::Scholar(const char * _name, unsigned int _age):Slave(_name,_age)
{
}

void Scholar::Work()
{
	std::cout << "Researching science! \n";
}

citizen Scholar::get() const
{
	return scholar;
}
