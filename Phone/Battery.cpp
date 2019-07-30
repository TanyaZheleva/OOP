#include "Battery.h"

int LengthString(const char* x)
{
	int size = 0;
	while (x[size] != 0)
	{
		size++;
	}
	return size;
}

int minimal(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

Battery::Battery()
{

}

Battery::~Battery()
{

}

int Battery::getTalktime()
{
	return this->talktime;
}

const char* Battery::getBatteryModel()
{
	return this->BatteryModle;
}

void Battery::setTalktime(int _talktime)
{
	this->talktime = _talktime;
}

void Battery::setBatteryModel(const char* _BatteryModle)
{
	int size = LengthString(_BatteryModle);
	int capacity = BatteryModelCapacity - 1;
	int length = minimal(size, capacity)-1;
	for (size_t i = 0; i < length; i++)
	{
		this->BatteryModle[i] = _BatteryModle[i];
	}
	this->BatteryModle[length] = 0;

}