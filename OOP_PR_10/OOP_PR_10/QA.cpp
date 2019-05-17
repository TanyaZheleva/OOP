#include"QA.h"

QA::QA(const char * _name, int _experience, float _salary,const char * _project, bool _manual) :IT(_name, _experience, _salary, _project)
{
	this->setManual(_manual);
}

QA::QA(const QA & old):IT(old)
{
	this->setManual(old.getManual());
}

void QA::setManual(bool _manual)
{
	manual = _manual;
}

bool QA::getManual() const
{
	return manual;
}

Employee* QA::clone() const
{
	return new QA(*this);
}

void QA::print() const
{
IT::print();
	std::cout << "\nManual: " << manual;
}
