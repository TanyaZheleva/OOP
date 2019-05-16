#include "Forecast.h"

Forecast::Forecast()
{
	temp.setMin(0);
	temp.setMax(0);
	temp.setAvg(0);
	place = new char[1];
	place[0] = '\0';
}

Forecast::Forecast(const char * _place, Temperature const & _temp)
{
	int length = strlen(_place);
	place = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		place[i] = _place[i];
	}
	this->setTemp(_temp);
}

Forecast::Forecast(const Forecast & old)
{
	setTemp(old.temp);
	int length = strlen(old.place);
	place = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		place[i] = old.place[i];
	}
}

Forecast & Forecast::operator=(const Forecast & rhs)
{
	if (this != &rhs)
	{
		setPlace(rhs.place);
		setTemp(rhs.temp);
	}
	return *this;
}

Forecast::~Forecast()
{
	delete[] place;
}

const char * Forecast::getPlace() const
{
	return place;
}

Temperature Forecast::getTemp() const
{
	return temp;
}

void Forecast::setPlace(const char * _place)
{

	delete[] place;
	int length = strlen(_place);
	place = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		place[i] = _place[i];
	}
}

void Forecast::setTemp(const Temperature & _temp)
{
	temp.setMin(_temp.getMin());
	temp.setMax(_temp.getMax());
	temp.setAvg(_temp.getAvg());
}

void Forecast::UpdateIfHotter(Forecast const & _forecast)
{
	if (_forecast.getPlace() == place)
	{
		if (temp < _forecast.temp)
		{
			setPlace(_forecast.getPlace());
			setTemp(_forecast.temp);
		}
	}
}

std::ostream & operator<<(std::ostream & os, const Forecast & rhs)
{
	return os << "Place: " << rhs.getPlace() << '\n'
		<< rhs.getTemp();
}

std::istream & operator>>(std::istream & is, Forecast & rhs)
{

	/*rhs.place = new char[10];
	int i = 0;
	is >> rhs.place[i];
	i++;*/
	is >> rhs.temp;
	std::cout << "Enter place: ";
	is >> rhs.place;
	return is;
}
