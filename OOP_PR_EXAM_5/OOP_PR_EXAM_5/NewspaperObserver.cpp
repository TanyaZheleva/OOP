#include "NewspaperObserver.h"

NewspaperObserver::NewspaperObserver(std::string _name, std::string _city, double _temperature)
	:name(_name), city(_city), temperature(_temperature)
{}

NewspaperObserver::NewspaperObserver(const NewspaperObserver & old)
{
	name = old.name;
	city = old.city;
	temperature = old.temperature;
}

void NewspaperObserver::update(std::string _city, double _temperature)
{
	city = _city;
	temperature = _temperature;
	std::cout << "Update " << name << ": The temperature in " << city << " is " << temperature << "\n";
}

void NewspaperObserver::printMeteo() const
{
	std::cout << "Newspaper " << name << ": The temperature in " << city << " is " << temperature << '\n';
}

Observer * NewspaperObserver::clone()
{
	return new NewspaperObserver(*this);
}
