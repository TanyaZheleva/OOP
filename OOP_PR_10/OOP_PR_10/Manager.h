#pragma once
#include "Employee.h"

class Manager:public Employee
{
public:
	Manager(const char* _name = "", int _experience = 0, float _salary = 600.0f, int _productivity = 100, int _managing=1);
	void setManaging(int _managing);
	int getManaging()const;
	Employee* clone()const override;
	void print()const override;
	type get()const  override;
	float work() override;
private:
	int managing;
};
