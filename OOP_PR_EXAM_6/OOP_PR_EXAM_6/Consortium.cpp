#include "Consortium.h"

Consortium::Consortium(std::string _name) 
	:Company(_name)
{}

Consortium::~Consortium()
{
	unsigned int length = companies.size();
	for (unsigned int i = 0; i < length; i++)
	{
		delete companies[i];
	}
}

Consortium::Consortium(const Consortium & old) :Company(old)
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
		Company::operator=(rhs);
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

bool Consortium::perform(std::string _project)
{
	//index of company with the least assigned projects
	int indexMin = 0;
	//count of assigned projects of the company with the least such
	int assignedProjectsOfMin = companies[0]->getAssignedProjects();

	unsigned int length = companies.size();
	for (size_t i = 0; i < length; i++)
	{
		if (assignedProjectsOfMin > companies[i]->getAssignedProjects());
		{
			assignedProjectsOfMin = companies[i]->getAssignedProjects();
			indexMin = i;
		}
	}

	assignedProjects++;
	if ((companies[indexMin]->perform(_project)) == true)
	{
		sucessfulProjects++;
		return true;
	}
	return false;
}

double Consortium::reliabilityRate()
{
	return sucessfulProjects / assignedProjects;
}

void Consortium::addCompany(Company * _add)
{
	companies.push_back(_add->clone());
}

void Consortium::deleteCompany(Company * _delete)
{
	unsigned int length = companies.size();
	for (size_t i = 0; i < length; i++)
	{
		if (_delete->getName() == companies[i]->getName())
		{
			companies.erase(companies.begin() + i);
		}
	}
}

void Consortium::printStatus() const
{
	unsigned int length = companies.size();
	for (size_t i = 0; i < length; i++)
	{
		std::cout << companies[i]->getName() << ": reliability " << companies[i]->reliabilityRate();
	}
}

type Consortium::get()
{
	return consortium;
}

std::string Consortium::getName() const
{
	return name;
}

int Consortium::getAssignedProjects() const
{
	return assignedProjects;
}

Company * Consortium::clone()
{
	return new Consortium(*this);
}

std::ostream & operator<<(std::ostream & os, const Consortium & company)
{
	unsigned int size = company.companies.size();
	for (size_t i = 0; i < size; i++)
	{
		if (company.companies[i]->get() == consortium)
		{
			os<<"consortiun: "<<size<<" "<<company.getName()<<'\n';
			os << company.companies[i]->clone();
		}
		else
		{
			os << company.companies[i]->clone();
		}
	}
	
	return os;
}