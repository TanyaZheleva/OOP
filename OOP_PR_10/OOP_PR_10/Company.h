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
private:
	Employee* employees;
};