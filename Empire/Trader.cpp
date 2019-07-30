#include "Trader.h"

Trader::Trader(const char * _name, unsigned int _age) :Slave(_name, _age)
{
}

void Trader::Work()
{
	std::cout << "Trading!\n";
}

citizen Trader::get() const
{
	return trader;
}
