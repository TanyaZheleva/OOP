#pragma once
#include "Event.h"

class EventLog
{
public:
	EventLog();
	~EventLog();
	EventLog(const EventLog& old);
	EventLog& operator= (const EventLog& rhs);
	
	void addEvent(const Event& _event);
	void print();
private:
	Event* events;
	unsigned int size;
	unsigned int capacity;
};
