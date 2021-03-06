#include "Programmer.h"

Programmer::Programmer(const char * _name, int _experience, float _salary, int _productivity, const char * _project, const char * _language)
	:IT(_name, _experience, _salary,_productivity, _project)
{
	this->setLanguage(_language);
}

Programmer::~Programmer()
{
	delete[] language;
}

Programmer::Programmer(const Programmer & old) :IT(old)
{
	int length = strlen(old.language);
	language = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		language[i] = old.language[i];
	}
}

Programmer & Programmer::operator=(const Programmer & rhs)
{
	if (this != &rhs)
	{
		IT::operator=(rhs);
		this->setLanguage(rhs.getLanguage());
	}
	return *this;
}

void Programmer::setLanguage(const char * _language)
{
	if (_language)
	{
		int length = strlen(_language);
		delete[] language;
		language = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			language[i] = _language[i];
		}
	}
	else
	{
		language = new char[1];
		language[0] = '\0';
	}
}

const char * Programmer::getLanguage() const
{
	return language;
}

Employee * Programmer::clone() const
{
	return new Programmer(*this);
}

void Programmer::print() const
{
	IT::print();
	std::cout << "\nLanguage: " << language;
}

type Programmer::get() const
{
	return programmer;
}

float Programmer::work()
{
	float monthlyPay = 75;
	int months = getExperience();
	for (int i = 0; i < months; i++)
	{
		monthlyPay *= months;
	}
	return monthlyPay;
}
