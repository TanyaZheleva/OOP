#include "Manager.h"

Manager::Manager(const char * _name, int _experience,
	float _salary, int _productivity, int _managing) :Employee(_name, _experience, _salary,_productivity)
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

float Manager::work()
{
	int months = getExperience();
	int productivityM = getProductivity();
	int years = months / 12;
	if (months < 24)
	{
		setProductivity(productivityM*0.75);
	}
	if (months > 48)
	{
		setProductivity((productivityM+productivityM*0.1)*years);
	}
}
