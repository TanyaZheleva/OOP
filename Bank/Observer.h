#pragma once
#include <string>

class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual void update(std::string _currency, double _rate) = 0;
	virtual std::string getName()const;
private:
	std::string name;
};

