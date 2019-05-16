#pragma once
#include "IT.h"

class Programmer:public IT
{
public:
	Programmer();
	Programmer(char* _name = nullptr, int _experience = 0, int _salary = 600.0f, char* _project = nullptr, char* _language = nullptr);
	~Programmer();
	Programmer(const Programmer& old);
	Programmer& operator=(const Programmer& rhs);

	void setLanguage(const char* _language);
	const char* getLanguage()const;

private:
	char* language;
};
