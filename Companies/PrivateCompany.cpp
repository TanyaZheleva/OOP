#include "PrivateCompany.h"

PrivateCompany::PrivateCompany(std::string _name, int _atribute)
	:Company(_name), attribute(_atribute), count(0)
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

//double PrivateCompany::reliabilityRate()
//{
//	return sucessfulProjects / assignedProjects;
//}

int PrivateCompany::getAssignedProjects() const
{
	return assignedProjects;
}

std::string PrivateCompany::getName() const
{
	return name;
}

Company * PrivateCompany::clone()
{
	return new PrivateCompany(*this);
}

type PrivateCompany::get()
{
	return privateCompany;
}

std::ostream & operator<<(std::ostream & os, const PrivateCompany & company)
{
	return os << "private: " << company.attribute << " " << company.name << "\n";
}
