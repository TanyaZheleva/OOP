#include "Observer.h"

Observer::Observer(std::string _name, std::string _city, double _temperature)
:name(_name),city(_city),temperature(_temperature)
{
}

Observer::Observer(const Observer & old)
{
	name = old.name;
	city = old.city;
	temperature = old.temperature;
}

Observer * Observer::clone()
{
	return nullptr;
}

//bool Observer::compare(std::string other)
//{
//	int size = name.size();
//	int otherSize = other.size();
//	if (size == otherSize)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			if (name[i] != other[i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//	return false;
//}

std::string Observer::getName() const
{
	return name;
}
