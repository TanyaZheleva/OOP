#include "Programmer.h"

Programmer::Programmer():IT(),language(nullptr)
{
}

Programmer::Programmer(char * _name, int _experience, int _salary, char * _project, char * _language)
{
	IT::IT(_name, _experience, _salary, _project);
	this->setLanguage(_language);
}

Programmer::~Programmer()
{
	delete[] language;
}

Programmer::Programmer(const Programmer & old):IT(old)
{
	this->setLanguage(old.getLanguage());
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
	int length = strlen(_language);
	language = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		language[i] = _language[i];
	}
}

const char * Programmer::getLanguage() const
{
	return language;
}
