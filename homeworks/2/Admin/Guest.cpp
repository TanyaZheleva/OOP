#include "Guest.h"

Guest::Guest()
{
	IPAddress = new char[1];
	IPAddress[0] = '\0';
}

Guest::~Guest()
{
	delete[] IPAddress;
}

Guest::Guest(const Guest & old)
{
	int length = strlen(old.IPAddress);
	IPAddress = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		IPAddress[i] = old.IPAddress[i];
	}
}

Guest & Guest::operator=(const Guest & rhs)
{
	if (this != &rhs)
	{
		delete[] IPAddress;
		int length = strlen(rhs.IPAddress);
		IPAddress = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			IPAddress[i] = rhs.IPAddress[i];
		}
	}
	return *this;
}



