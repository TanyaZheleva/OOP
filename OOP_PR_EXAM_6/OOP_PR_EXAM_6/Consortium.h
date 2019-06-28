#pragma once
#include "Company.h"
class Consortium :public Company
{
public:
	Consortium(std::string _name);
	~Consortium();
	Consortium(const Consortium& old);
	Consortium& operator= (const Consortium& rhs);
	
	bool perform(std::string _project) override;
//	double reliabilityRate()override;

	void addCompany(Company* _add);
	void deleteCompany(Company* _delete);
	void printStatus()const;
	
	type get() override;
	std::string getName()const override;
	int getAssignedProjects()const override;
	Company* clone() override;

	friend std::ostream& operator<< (std::ostream& os, const Consortium& company);

private:
	std::vector<Company*> companies;

};

