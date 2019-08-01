#pragma once
#include <string>
#include <vector>
#include <iostream>
class Observer
{
public:
   Observer(std::string _name, std::string _city, double _temperature);
	Observer(const Observer& old);
	virtual void update(std::string _city, double _temperature) = 0;
	virtual Observer* clone();
	//virtual bool compare(std::string other);
	virtual std::string getName()const;
protected:
	std::string name;
	std::string city;
	double temperature;
};