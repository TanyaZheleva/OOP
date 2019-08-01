#include "Company.h"

Company::Company(std::string _name, int _assignedProjects, int _sucessfulProjects)
	:name(_name), assignedProjects(_assignedProjects), sucessfulProjects(_sucessfulProjects)
{}

Company::Company(const Company& old) :
	name(old.name), project(old.project), assignedProjects(old.assignedProjects), sucessfulProjects(old.sucessfulProjects)
{}

Company& Company:: operator=(const Company& rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		project = rhs.project;
		sucessfulProjects = rhs.sucessfulProjects;
		assignedProjects = rhs.assignedProjects;
	}
	return *this;
}

double Company::reliabilityRate()
{
	if (assignedProjects > 0)
	{
		return sucessfulProjects / assignedProjects;
	}
	else
	{
		return 0.0;
	}
}


Company* Company::clone()
{
	return nullptr;
}