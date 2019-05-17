#include "Manager.h"

Manager::Manager(const char * _name, int _experience,
	float _salary, int _managing) :Employee(_name, _experience, _salary)
{
	this->setManaging(_managing);
}

void Manager::setManaging(int _managing)
{
	managing = _managing;
}

int Manager::getManaging() const
{
	return managing;
}

Employee * Manager::clone() const
{
	return new Manager(*this);
}

void Manager::print() const 
{
	Employee::print();
	std::cout << "\nManaging: " << managing;
}

type Manager::get()const 
{
	return manager;
}
