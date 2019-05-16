#include"IT.h"

IT::IT():Employee(),project(nullptr)
{
}

IT::IT(char * _name, int _experience, int _salary, char * _project)
{
	Employee::Employee(_name, _experience, _salary);
	this->setProject(_project);
}

IT::~IT()
{
	delete[] project;
}

IT::IT(const IT & old):Employee(old)
{
	this->setProject(old.getProject());
}

IT & IT::operator=(const IT & rhs)
{
	if (this != &rhs)
	{
		Employee::operator=(rhs);
		this->setProject(rhs.getProject());
	}
	return *this;
}

void IT::setProject(const char * _project)
{
	int length = strlen(_project);
	project = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		project[i] = _project[i];
	}
}

const char * IT::getProject() const
{
	return project;
}
