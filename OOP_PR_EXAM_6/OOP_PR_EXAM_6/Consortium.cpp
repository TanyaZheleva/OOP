#include "Consortium.h"

Consortium::Consortium(std::string _name):name(_name),sucessfulProjects(0),assignedProjects(0)
{}

Consortium::~Consortium()
{
	unsigned int length = companies.size();
	for (unsigned int  i = 0; i < length; i++)
	{
		delete companies[i];
	}
}

Consortium::Consortium(const Consortium & old):
	name(old.name),sucessfulProjects(old.sucessfulProjects),assignedProjects(old.assignedProjects),project(old.project)
{
	unsigned int length = companies.size();
	for (unsigned int i = 0; i < length; i++)
	{
		companies[i] = old.companies[i]->clone();
	}
}

Consortium & Consortium::operator=(const Consortium & rhs)
{
	if (this != &rhs)
	{
		name = rhs.name;
		project = rhs.project;
		sucessfulProjects = rhs.sucessfulProjects;
		assignedProjects = rhs.assignedProjects;
		unsigned int length = companies.size();
		for (unsigned int i = 0; i < length; i++)
		{
			delete companies[i];
		}
		unsigned int size = rhs.companies.size();
		for (unsigned int i = 0; i < size; i++)
		{
			companies[i] = rhs.companies[i]->clone();
		}
	}
	return *this;
}

void Consortium::addCompany(Company * _add)
{
	companies.push_back(_add->clone());
}

Company * Consortium::clone()
{
	return new Consortium(*this);
}
