#include "Observer.h"

Observer * Observer::clone()
{
	return nullptr;
}

bool Observer::compare(std::string other)
{
	int size = name.size();
	int otherSize = other.size();
	if (size == otherSize)
	{
		for (int i = 0; i < size; i++)
		{
			if (name[i] != other[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

std::string Observer::getName() const
{
	return name;
}
