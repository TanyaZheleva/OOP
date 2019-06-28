#include "Company.h"

Company::Company(std::string _name, int _assignedProjects = 0, int _sucessfulProjects = 0)
	:name(_name)
{}

Company::Company(const Company& old) :
	name(old.name), project(old.project), assignedProjects(old.assignedProjects), sucessfulProjects(old.sucessfulProjects)
{}

Company& Company:: operator=(const Company& rhs)
{
	name = rhs.name;
	project = rhs.project;
	sucessfulProjects = rhs.sucessfulProjects;
	assignedProjects = rhs.assignedProjects;
}

Company* Company::clone()
{
	return nullptr;
}