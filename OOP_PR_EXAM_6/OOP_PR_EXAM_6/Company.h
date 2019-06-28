#pragma once
#include <string>
#include <vector>
#include <iostream>

class Company
{
public:
	virtual bool perform(std::string project) = 0;
	virtual double reliabilityRate() = 0;
	virtual Company* clone()
	{
		return nullptr;
	}
};

