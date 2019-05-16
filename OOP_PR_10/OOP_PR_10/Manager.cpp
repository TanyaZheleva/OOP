#include "Manager.h"

Manager::Manager(char * _name, int _experience, int _salary, int _managing)
{
	Employee::Employee(_name, _experience, _salary);
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
