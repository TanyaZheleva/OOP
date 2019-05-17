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


//private:
	Employee** employees;
	int current;
	int size;
};