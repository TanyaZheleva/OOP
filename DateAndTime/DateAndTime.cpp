#include <iostream>
#include "DateAndTime.h"

DateAndTime::DateAndTime()
{
}
const int DateAndTime::getDay()
{
	if (day < 32 && day>0)
	{
		return this-> day;
	}
	else return -1;
}
const int DateAndTime::getMonth()
{
	if (month < 13 && month>0)
	{
		return this->month;
	}
	else return -1;
}
const int DateAndTime::getYear()
{
	if (year > 0 && year < 2019)
	{
		return this->year;
	}
	else return -1;
}
const int DateAndTime::getSecond()
{
	if (second > 0)
	{
		return this->second;
	}
	else return -1;
}
const int DateAndTime::getMinute()
{
	if (minute > 0)
	{
		return this->minute;
	}
	else return -1;
}
const int DateAndTime::getHour()
{
	if (hour > 0)
	{
		return this->hour;
	}
	else return -1;
}
void DateAndTime::setDay(const int _day)
{
	if (_day > 0 && _day < 32)
	{
		this->day = _day;
	}
}

void DateAndTime::setMonth(const int _month)
{
	if (_month > 0 && _month < 13)
	{
		this->month = _month;
	}
}
void DateAndTime::setYear(const int _year)
{
	if (year > 0 && year < 2019)
	{
		this->year = _year;
	}
}
void DateAndTime::setSecond(const int _second)
{
	if (second > 0)
	{
		this->second = _second;
	}
}
void DateAndTime:: setMinute(const int _minute)
{
	if (minute > 0)
	{
		this->minute= _minute;
	}
}
void DateAndTime:: setHour(const int _hour)
{
	if (hour > 0)
	{
		this->second = _hour;
	}
}