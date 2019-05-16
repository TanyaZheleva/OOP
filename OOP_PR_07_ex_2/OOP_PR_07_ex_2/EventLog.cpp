#include "EventLog.h"

EventLog::EventLog():size(0),capacity(10)
{
	events = new Event[capacity];
}

EventLog::~EventLog()
{
	delete[] events;
}

EventLog::EventLog(const EventLog & old):size(old.size),capacity(old.capacity)
{
	events = new Event[capacity];
	for (unsigned int i = 0; i < capacity; i++)
	{
		events[i] = old.events[i];
	}
}

EventLog & EventLog::operator=(const EventLog & rhs)
{
	if (this != &rhs)
	{
		size = rhs.size;
		capacity = rhs.capacity;
		delete[] events;
		events = new Event[capacity];
		for (unsigned int i = 0; i < capacity; i++)
		{
			events[i] = rhs.events[i];
		}
	}
	return *this;
}

void EventLog::addEvent(const Event & _event)
{
	if (size == capacity)
	{
		Event*temp = new Event[capacity*2];
		for (unsigned int i = 0; i < capacity; i++)
		{
			temp[i] = events[i];
		}
		capacity *= 2;
		delete[] events;
		events = temp;
	}
	events[size] = _event;
	size++;
}

void EventLog::print()
{
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << events[i];
	}
}

