#pragma once
#include "Employee.h"

class IT:public Employee
{
public:
	IT(const char* _name = "", int _experience = 0,
		float _salary = 600.0f, const char* _project = "");
	~IT();
	IT(const IT& old);
	IT& operator=(const IT& rhs);

	void setProject(const char* _project);
	const char* getProject()const;

	Employee* clone()const override;
	void print()const override;
private:
	char* project=nullptr;
};