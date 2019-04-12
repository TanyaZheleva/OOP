#pragma once


class DateAndTime 
{
public:
	DateAndTime();
	const int getDay();
	const int getMonth();
	const int getYear();
	const int getSecond();
	const int getMinute();
	const int getHour();
	void setDay(const int _day);
	void setMonth(const int _month);
	void setYear(const int _year);
	void setSecond(const int _second);
	void setMinute(const int _minute);
	void setHour(const int _hour);

private:
	int day;
	int month;
	int year;
	int second;
	int minute;
	int hour;
};