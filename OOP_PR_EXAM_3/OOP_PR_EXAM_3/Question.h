#pragma once
#include <vector>
#include <string>
#include <iostream>
class Question
{
public:
	Question() {};
	virtual void ask() = 0;
	virtual double grade() = 0;
	virtual Question* clone();
	bool compare(std::string lhs, std::string rhs);
};

