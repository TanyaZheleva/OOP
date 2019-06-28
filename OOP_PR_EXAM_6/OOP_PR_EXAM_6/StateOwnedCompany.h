#pragma once
#include "Company.h"
class StateOwnedCompany :public Company
{
public:
	StateOwnedCompany(std::string _name);
	bool perform(std::string project) override;
	double reliabilityRate()override;
	Company* clone() override;
private:
	std::string name;
	std::string project;
	int sucessfulProjects;
	int assignedProjects;
	int count;
};

