#include "Company.h"

Company::Company() :size(1), current(0)
{
	employees = new Employee*[size];
	employees[0] = new Employee;
}

Company::~Company()
{
	for (int i = 0; i < current; i++)
	{
		delete employees[i];
	}
}

Company::Company(const Company & old) :size(old.size), current(old.current)
{
	employees = new Employee*[size];
	for (int i = 0; i < current; i++)
	{
		employees[i] = old.employees[i]->clone();
	}
}

Company & Company::operator=(const Company & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < current; i++)
		{
			delete employees[i];
		}

		current = rhs.current;
		size = rhs.size;

		employees = new Employee*[size];
		for (int i = 0; i < current; i++)
		{
			employees[i] = rhs.employees[i]->clone();
		}
	}
	return *this;
}

void Company::addEmployee(const Employee& _add)
{
	if (check(_add))
	{
		if (size <= current)
		{
			Employee** temp = new Employee*[current + 1];
			for (int i = 0; i < current; i++)
			{
				temp[i] = employees[i]->clone();
			}
			temp[current] = _add.clone();
			for (int i = 0; i < current; i++)
			{
				delete employees[i];
			}
			employees = temp;
			current++;
			size = current;
		}
		else
		{
			employees[current] = _add.clone();
			current++;
		}
	}
	else
	{
		std::cout << "Already exists a manager!\n";
	}
}

void Company::leftEmployee(const Employee& _left)
{
	Employee** temp = new Employee*[current - 1];
	int j = 0;
	for (int i = 0; i < current; i++)
	{
		if (*employees[i] != _left)
		{
			temp[j] = employees[i]->clone();
			j++;
		}

	}
	for (int i = 0; i < current; i++)
	{
		delete employees[i];
	}
	employees = temp;
	size--;
	current--;
}

int Company::getCurrent() const
{
	return current;
}

void Company::printCompany() const
{
	for (int i = 0; i < current; i++)
	{
		employees[i]->print();
		std::cout << '\n';
	}
}

void Company::setCurrent(int _current)
{
	current = _current;
}

Employee* Company::getEmployees() const
{
	Employee* temp = new Employee[current];
	for (int i = 0; i < current; i++)
	{
		temp[i] = *employees[i];
	}
	return temp;
}

void Company::fire()
{
	Employee* temp = getEmployees();
	for (int i = 0; i < current; i++)
	{
		if (temp[i].getExperience() < 3)
		{
			leftEmployee(temp[i]);
		}
	}
}

float Company::monthlySalaries()
{
	float sum = 0.0f;
	Employee* temp = getEmployees();
	for (int i = 0; i < current; i++)
	{
		sum += temp[i].getSalary();
	}
	return sum;
}

float Company::averageMonthlyPay()
{
	float monthly = monthlySalaries();
	float average = monthly / current;
	return average;
}

bool Company::check(const Employee& _add)
{
	if (_add.get() == manager)
	{
		//Employee* temp = getEmployees();
		for (int i = 0; i < current; i++)
		{
			//if (temp[i].get() == manager)
			if(manager==(*employees[i]).get())
			{
				return false;
			}
		}
	}
	return true;
}
