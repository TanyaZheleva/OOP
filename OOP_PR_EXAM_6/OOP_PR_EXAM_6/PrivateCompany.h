#pragma once
#include "Company.h"
class PrivateCompany :public Company
{
public:
	PrivateCompany(std::string _name,int _atribute);
	bool perform(std::string project) override;
	double reliabilityRate()override;
	int getAssignedProjects()const override;
	std::string getName()const override;
	Company* clone() override;
	type get() override;
	friend std::ostream& operator<< (std::ostream& os, const PrivateCompany& company);
private:
	int attribute;
	int count;//counts how many successful projects are left until the attibute is reached
};

