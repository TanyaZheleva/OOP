#pragma once
#include "Employee.h"

class Manager:public Employee
{
public:
	Manager(char* _name = nullptr, int _experience = 0, int _salary = 600.0f, int _managing=1);
	void setManaging(int _managing);
	int getManaging()const;
private:
	int managing;
};
