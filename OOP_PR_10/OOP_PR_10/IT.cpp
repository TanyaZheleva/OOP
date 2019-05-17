#include"IT.h"

IT::IT(const char * _name, int _experience, float _salary, const char * _project) :
	Employee(_name, _experience, _salary)
{
	this->setProject(_project);
}

IT::~IT()
{
	delete[] project;
}

IT::IT(const IT & old) :Employee(old)
{
	int length = strlen(old.project);
	project = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		project[i] = old.project[i];
	}
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
	if (_project)
	{
		int length = strlen(_project);
		delete[] project;
		project = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			project[i] = _project[i];
		}
	}
	else
	{
		project = new char[1];
		project[0] = '\0';
	}
}

const char * IT::getProject() const
{
	return project;
}

Employee* IT::clone() const
{
	return new IT(*this);
}

void IT::print() const
{
Employee::print();
	std::cout << "\nProject: " << project;
}

type IT::get() const
{
	return it;
}
