#pragma once
#include <iostream>

class Employee
{
public:
	//Employee();
	Employee(char* _name = nullptr, int _experience = 0, float _salary = 600.0f);
	~Employee();
	Employee(const Employee& old);
	Employee& operator=(const Employee& rhs);

	void setName(const char* _name);
	void setExperience(int _experience);
	void setSalary(float _salary);

	const char* getName()const;
	int getExperience()const;
	float getSalary()const;

private:
	char* name;
	int experience;
	float salary;
};
