#pragma once
#include <iostream>

class Guest
{
public:
	Guest();
	~Guest();
	Guest(const Guest& old);
	Guest& operator= (const Guest& rhs);

protected:
	char* IPAddress;
};
