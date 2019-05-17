#pragma once
#include "Manager.h"
#include "Programmer.h"
#include "QA.h"

class Company
{
public:
	Company();
	~Company();
	Company(const Company& old);
	Company& operator=(const Company& rhs);

	void addEmployee(const Employee& _add);
	void leftEmployee(const Employee& _left );

	int getCurrent()const;
	void printCompany()const;
	void setCurrent(int _current);
	Employee* getEmployees()const;
	void fire();
	float monthlySalaries();
	float averageMonthlyPay();
	bool check(const Employee& _add);
private:
	Employee** employees;
	int current;
	int size;
};