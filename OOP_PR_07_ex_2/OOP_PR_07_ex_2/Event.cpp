#include "Event.h"

Event::Event():size(0),capacity(10),code(9999)
{
	message = new char[capacity];
	message[size] = '\0';
}

Event::~Event()
{
	delete[] message; 
}

Event::Event(const Event& old)
{
	code = old.code;
	size = old.size;
	capacity = old.capacity;
	message = new char[capacity+1];
	for (unsigned int i = 0; i < capacity; i++)
	{
		message[i] = old.message[i];
	}
	message[capacity] = '\0';
}

Event& Event::operator=(const Event& rhs)
{
	if (this != &rhs)
	{
	code = rhs.code;
	size = rhs.size;
	capacity = rhs.capacity;
	delete[] message;
	message = new char[capacity + 1];
	for (unsigned int i = 0; i < capacity;i++)
	{
		message[i] = rhs.message[i];
	}
	message[capacity] = '\0';
	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Event & rhs)
{
	return os << rhs.message << rhs.code << "\n";
}
