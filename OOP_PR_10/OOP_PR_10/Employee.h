#pragma once
#include <iostream>
enum type{employee,manager,qa,programmer,it};

class Employee
{
public:
	Employee(const char* _name = "", int _experience = 0, float _salary = 600.0f);
	~Employee();
	Employee(const Employee& old);
	Employee& operator=(const Employee& rhs);

	void setName(const char* _name);
	void setExperience(int _experience);
	void setSalary(float _salary);

	const char* getName()const;
	int getExperience()const;
	float getSalary()const;

	bool operator!= (const Employee& rhs);
	virtual Employee* clone() const;
	virtual void print()const;
	virtual type get()const;
private:
	char* name=nullptr;
	int experience;
	float salary;
};
