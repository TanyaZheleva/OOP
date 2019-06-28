#include "PrivateCompany.h"

PrivateCompany::PrivateCompany(std::string _name, int _atribute)
	:name(_name), attribute(_atribute), sucessfulProjects(0), count(0), assignedProjects(0)
{}

bool PrivateCompany::perform(std::string project)
{
	if (count < attribute)
	{
		count++;
		sucessfulProjects++;
	assignedProjects++;
		return true;
	}
	else
	{
		count = 0;
		assignedProjects++;
		return false;
	}
}

double PrivateCompany::reliabilityRate()
{
	return sucessfulProjects / assignedProjects;
}
