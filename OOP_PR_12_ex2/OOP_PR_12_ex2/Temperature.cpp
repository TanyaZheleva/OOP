#include "Temperature.h"

Temperature::Temperature() :min(12), max(12), avg(12)
{}

Temperature::Temperature(int _min, int _avg, int _max)
{
	if (_min <= _avg && _avg <= _max)
	{
		min = _min;
		avg = _avg;
		max = _max;
	}
	else
	{
		Temperature();
	}
}

//Temperature::Temperature(const Temperature & old)
//{
//	min = old.min;
//	max = old.max;
//	avg = old.avg;
//}

const int Temperature::getMin() const
{
	return min;
}

const int Temperature::getAvg() const
{
	return avg;
}

const int Temperature::getMax() const
{
	return max;
}

const int Temperature::GetAmplitude()
{
	return max - min;
}

void Temperature::setMin(int _min)
{
	min = _min;
}

void Temperature::setMax(int _max)
{
	max = _max;
}

void Temperature::setAvg(int _avg)
{
	avg = _avg;
}

bool Temperature::operator==(const Temperature & rhs)
{
	if (max == rhs.max)
	{
		if (min == rhs.min)
		{
			if (avg = rhs.avg)
			{
				return true;
			}
			return false;
		}
		return false;
	}
	return false;
}

bool Temperature::operator!=(const Temperature & rhs)
{
	if (*this == rhs)
	{
		return false;
	}
	return true;
}

bool Temperature::operator<(const Temperature & rhs)
{
	if (max < rhs.max || min < rhs.min || avg < rhs.avg)
	{
		return true;
	}
	return false;
}

bool Temperature::operator>(const Temperature & rhs)
{
	if (*this < rhs)
	{
		return false;
	}
	return true;
}

bool Temperature::operator<=(const Temperature & rhs)
{
	if (max <= rhs.max || min <= rhs.min || avg <= rhs.avg)
	{
		return true;
	}
	return false;
}

bool Temperature::operator>=(const Temperature & rhs)
{
	if (*this <= rhs)
	{
		return false;
	}
	return true;
}

std::ostream & operator<<(std::ostream & os, const Temperature & rhs)
{
	return os<<"Min: "<<rhs.getMin()<<'\n' 
		<< "Max: " << rhs.getMax() << '\n'
		<< "Avg: " << rhs.getAvg() << '\n';
}

std::istream & operator>>(std::istream & is, Temperature & rhs)
{
	std::cout << "Enter min: ";
	is >> rhs.min;
	std::cout << "Enter avg: ";
	is >> rhs.avg;
	std::cout << "Enter max: ";
	is >> rhs.max;
	is.get();
	return is;
}
