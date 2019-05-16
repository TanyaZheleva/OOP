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
