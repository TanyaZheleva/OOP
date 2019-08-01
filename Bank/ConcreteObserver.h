#pragma once
#include "Observer.h"
#include "CentralBank.h"
#include <iostream>

class ConcreteObserver :public Observer
{
public:
	ConcreteObserver();
	~ConcreteObserver();
	void update(std::string _currency, double _rate) override;
	std::string getName()const override;

private:
	std::string name;
};

