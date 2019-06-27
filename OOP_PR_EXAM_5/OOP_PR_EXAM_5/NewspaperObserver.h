#pragma once
#include "Observer.h"
class NewspaperObserver :public Observer
{
public:
	NewspaperObserver(std::string _name,std::string _city,double _temperature);
	NewspaperObserver(const NewspaperObserver& old);
	void update(std::string _city, double _temperature) override;
	void printMeteo()const;
	Observer* clone() override;
private:
	std::string name;
	std::string city;
	double temperature;
};

