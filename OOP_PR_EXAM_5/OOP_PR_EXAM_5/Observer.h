#pragma once
#include <string>
#include <vector>
#include <iostream>
class Observer
{
public:
	virtual void update(std::string _city, double _temperature) = 0;
	virtual Observer* clone();
	virtual bool compare(std::string other);
	virtual std::string getName()const;
private:
	std::string name;
	std::string city;
	double temperature;
};