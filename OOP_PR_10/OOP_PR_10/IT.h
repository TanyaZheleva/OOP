#pragma once
#include "Employee.h"

class IT:public Employee
{
public:
	IT();
	IT(char* _name = nullptr, int _experience = 0, int _salary = 600.0f, char* _project = nullptr);
	~IT();
	IT(const IT& old);
	IT& operator=(const IT& rhs);

	void setProject(const char* _project);
	const char* getProject()const;


private:
	char* project;
};