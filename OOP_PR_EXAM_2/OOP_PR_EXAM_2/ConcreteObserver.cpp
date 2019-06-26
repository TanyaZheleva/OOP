#include "ConcreteObserver.h"



ConcreteObserver::ConcreteObserver()
{
}

ConcreteObserver::~ConcreteObserver()
{}

void ConcreteObserver::update(std::string _currency, double _rate)
{
	std::cout << "Update: " << name << ": " << _currency << ", " << _rate << '\n';
}

std::string ConcreteObserver::getName() const
{
	return name;
}
