#pragma once
#include "IT.h"

class Programmer:public IT
{
public:
	Programmer(const char* _name = "", int _experience = 0, float _salary = 600.0f, const char* _project = "", const char* _language = "");
	~Programmer();
	Programmer(const Programmer& old);
	Programmer& operator=(const Programmer& rhs);

	void setLanguage(const char* _language);
	const char* getLanguage()const;

	Employee* clone()const override;
	void print()const override;
	type get()const  override;
private:
	char* language=nullptr;
};
