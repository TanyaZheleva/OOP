#pragma once
#include "Company.h"
class StateOwnedCompany :public Company
{
public:
	StateOwnedCompany(std::string _name);
	bool perform(std::string project) override;
//	double reliabilityRate()override;
	std::string getName()const override;
	int getAssignedProjects()const override;
	Company* clone() override;
	type get() override;

	friend std::ostream& operator<< (std::ostream& os, const StateOwnedCompany& company);

private:
	int count;
};

