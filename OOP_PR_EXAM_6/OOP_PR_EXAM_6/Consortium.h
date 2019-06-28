#pragma once
#include "Company.h"
class Consortium :public Company
{
public:
	Consortium(std::string _name);
	~Consortium();
	Consortium(const Consortium& old);
	Consortium& operator= (const Consortium& rhs);
	
	bool perform(std::string project) override;
	double reliabilityRate()override;

	void addCompany(Company* _add);
	void deleteCompany(Company* _delete);
	
	Company* clone() override;

private:
	std::string name;
	std::string project;
	int sucessfulProjects;
	int assignedProjects;
	std::vector<Company*> companies;

};

