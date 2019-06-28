#pragma once
#include "Company.h"
class PrivateCompany :public Company
{
public:
	PrivateCompany(std::string _name,int _atribute);
	bool perform(std::string project) override;
	double reliabilityRate()override;

private:
	std::string name;
	std::string project;
	int sucessfulProjects;
	int assignedProjects;
	int attribute;
	int count;//counts how many successful projects are left until the attibute is reached
};

