#include "StateOwnedCompany.h"

StateOwnedCompany::StateOwnedCompany(std::string _name)
	:name(_name), sucessfulProjects(0), count(0), assignedProjects(0)
{}

bool StateOwnedCompany::perform(std::string project)
{
	if (count == 20)
	{
		sucessfulProjects++;
		assignedProjects++;
		count = 0;
	}
	else
	{
		assignedProjects++;
		count++;
	}
}

double StateOwnedCompany::reliabilityRate()
{
	return  sucessfulProjects / assignedProjects;
}

Company * StateOwnedCompany::clone()
{
	return new StateOwnedCompany(*this);
}
	

