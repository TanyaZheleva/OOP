#include "Employee.h"

bool compare(const char* lhs, const char* rhs)
{
	int length = strlen(lhs);
	int rlength = strlen(rhs);
	if (length == rlength)
	{
		for (int i = 0; i <= length; i++)
		{
			if (lhs[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

Employee::Employee(const char * _name, int _experience, float _salary)
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

void Employee::setName(const char* _name)
{
	if (_name)
	{
		int length = strlen(_name);
		delete[] name;
		name = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = _name[i];
		}
		name[length] = '\0';
	}
	else
	{
		name = new char[1];
		name[0] = '\0';
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

bool Employee::operator!=(const Employee& rhs)
{
	if (compare(name, rhs.name))
	{
		if (experience == rhs.experience)
		{
			if (salary == rhs.salary)
			{
				return false;
			}
			return true;
		}
		return true;
	}
	return true;
}

Employee * Employee::clone() const
{
	return new Employee(*this);
}

void Employee::print() const
{
	std::cout << "\nName: " << name <<
		"\nExperience: " << experience << "\nSalary: " << salary;
}

type Employee::get() const
{
	return employee;
}
