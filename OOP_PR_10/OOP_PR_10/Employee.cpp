#include "Employee.h"


//Employee::Employee():salary(600.0f),experience(0)
//{
//	name = new char[1];
//	name[0] = '\0';
//}

Employee::Employee(char * _name, int _experience, float _salary)
{
	int length = strlen(_name);
	name = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		name[i] = _name[i];
	}
	this->setExperience(_experience);
	this->setSalary(_salary);
}

Employee::~Employee()
{
	delete[] name;
}

Employee::Employee(const Employee & old)
{
	int length = strlen(old.name);
	name = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		name[i] = old.name[i];
	}
	this->setExperience(old.getExperience());
	this->setSalary(old.getSalary());
}

Employee & Employee::operator=(const Employee & rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setExperience(rhs.getExperience());
		this->setSalary(rhs.getSalary());
	}
	return *this;
}

void Employee::setName(const char * _name)
{
	delete[] name;
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
