#include "Employee.h"


Employee::Employee():name(nullptr),salary(600.0f),experience(0)
{
}

Employee::Employee(char * _name, int _experience, int _salary)
{
	this->setName(_name);
	this->setExperience(_experience);
	this->setSalary(_salary);
}

Employee::~Employee()
{
	delete[] name;
}

Employee::Employee(const Employee & old)
{
	this->setName(old.getName());
	this->setExperience(old.getExperience());
	this->setSalary(old.getSalary());
}

Employee & Employee::operator=(const Employee & rhs)
{
	if (this != &rhs)
	{
		this->setName(old.getName());
		this->setExperience(old.getExperience());
		this->setSalary(old.getSalary());
	}
	return *this;
}

void Employee::setName(const char * _name)
{
	int length = strlen(_name);
	name = new char[length + 1];
	for (int i = 0; i <=length; i++)
	{
		name[i] = _name[i];
	}
}

void Employee::setExperience(int _experience)
{
	experience = _experience;
}

void Employee::setSalary(float _salary)
{
	salary = _salary;
}

const char * Employee::getName() const
{
	return name;
}

int Employee::getExperience() const
{
	return experience;
}

float Employee::getSalary() const
{
	return salary;
}
