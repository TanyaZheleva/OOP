#include "Empire.h"

Empire::Empire()
{
	empireName = new char[1];
	empireName[0] = '\0';

	population = new Slave[1];
}

Empire::Empire(Slave * _population, const char * _empireName)
{
	int length = strlen(_empireName);
	empireName = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		empireName[i] = _empireName[i];
	}
	int size = sizeof(_population);
	population = new Slave[size];
	for (int i = 0; i <= size; i++)
	{
		population[i] = _population[i];
	}
}

Empire::~Empire()
{
	delete[] empireName;
	delete[] population;
}

Empire::Empire(const Empire & old)
{
	int length = strlen(old.empireName);
	empireName = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		empireName[i] = old.empireName[i];
	}
	int size = sizeof(old.population);
	population = new Slave[size];
	for (int i = 0; i <= size; i++)
	{
		population[i] = old.population[i];
	}
}

Empire & Empire::operator=(const Empire & rhs)
{
	if (this != &rhs)
	{
		delete[]empireName;
		int length = strlen(rhs.empireName);
		empireName = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			empireName[i] = rhs.empireName[i];
		}
		delete[] population;
		int size = sizeof(rhs.population);
		population = new Slave[size];
		for (int i = 0; i <= size; i++)
		{
			population[i] = rhs.population[i];
		}
	}
	return *this;
}

int Empire::Size() const
{
	return sizeof(population);
}


void Empire::addCitizen(const Slave& _citizen)
{
	if (_citizen.get() == slave)
	{
		int size = sizeof(population);
		Slave* temp = new Slave[size+1];
		for (int i = 0; i <= size; i++)
		{
			temp[i] = population[i];
		}
		temp[size] = (Slave&)_citizen;
		delete[] population;
		population = temp;
	}
}

