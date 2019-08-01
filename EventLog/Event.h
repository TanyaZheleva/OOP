#pragma once
#include <iostream>

class Event
{
public:
	Event();
	~Event();
	Event(const Event& old);
	Event& operator= (const Event& rhs);
	friend std::ostream& operator <<(std::ostream& os, const Event& rhs);
private:
	unsigned int code;
	char* message;
	unsigned int size;
	unsigned int capacity;
};
