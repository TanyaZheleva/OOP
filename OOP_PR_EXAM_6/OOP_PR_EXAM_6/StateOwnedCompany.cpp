#include "StateOwnedCompany.h"

StateOwnedCompany::StateOwnedCompany(std::string _name)
	:Company(_name), count(0)
{}

bool StateOwnedCompany::perform(std::string project)
{
	if (count == 20)
	{
		sucessfulProjects++;
		assignedProjects++;
		count = 0;
		return true;
	}
	else
	{
		assignedProjects++;
		count++;
		return false;
	}
}

//double StateOwnedCompany::reliabilityRate()
//{
//	return  sucessfulProjects / assignedProjects;
//}

std::string StateOwnedCompany::getName() const
{
	return name;
}

int StateOwnedCompany::getAssignedProjects() const
{
	return assignedProjects;
}

Company * StateOwnedCompany::clone()
{
	return new StateOwnedCompany(*this);
}

type StateOwnedCompany::get()
{
	return stateOwnedCompany;
}
	
std::ostream & operator<<(std::ostream & os, const StateOwnedCompany & company)
{
	return os << "state: " << company.getName() << '\n';
}
