#include "Company.h"

Company::Company()
{
	employees = new Employee[1];
}

Company::~Company()
{
	delete[] employees;
}

Company::Company(const Company & old)
{
	int length = sizeof(old);
	employees = new Employee[length];
	for (int i = 0; i < length; i++)
	{
		employees[i] = old.employees[i];
	}
}

Company & Company::operator=(const Company & rhs)
{
	if (this != &rhs)
	{
		delete[] employees;
		int length = sizeof(rhs);
		employees = new Employee[length];
		for (int i = 0; i < length; i++)
		{
			employees[i] = rhs.employees[i];
		}
	}
	return *this;
}
