#pragma once
#include <string>
#include <vector>
#include <iostream>
enum type
{
	privateCompany,
	stateOwnedCompany,
	consortium
};
class Company
{
public:
	Company(std::string _name, int _assignedProjects = 0, int _sucessfulProjects = 0);
	Company(const Company& old);
	Company& operator=(const Company& rhs);
	
	virtual bool perform(std::string project) = 0;
	virtual double reliabilityRate() = 0;
	virtual int getAssignedProjects()const = 0;
	virtual std::string getName()const = 0;
	virtual Company* clone();

	virtual type get() = 0;
protected:
	std::string name;
	std::string project;
	int sucessfulProjects;
	int assignedProjects;
};

