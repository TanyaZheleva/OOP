#include "Slave.h"

Slave::Slave(const char * _name, unsigned int _age):age(_age)
{
	int length = strlen(_name);
	name = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		name[i] = _name[i];
	}
}

Slave::Slave():age(1)
{
	name = new char[1];
	name[0] = '\0';
}

Slave::~Slave()
{
	delete[] name;
}

Slave::Slave(const Slave & old):age(old.age)
{
	int length = strlen(old.name);
	name = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		name[i] = old.name[i];
	}
}

Slave & Slave::operator=(const Slave & rhs)
{
	if (this != &rhs)
	{
		age = rhs.age;
		delete[] name;
		int length = strlen(rhs.name);
		name = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			name[i] = rhs.name[i];
		}
	}
	return *this;
}

void Slave::Work()
{
	std::cout << "Slave working! \n";
}

citizen Slave::get() const
{
	return slave;
}
