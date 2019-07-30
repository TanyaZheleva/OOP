#include"QA.h"

QA::QA(const char * _name, int _experience, float _salary, int _productivity, const char * _project, bool _manual) :IT(_name, _experience, _salary, _productivity, _project)
{
	this->setManual(_manual);
}

QA::QA(const QA & old) : IT(old)
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

type QA::get() const
{
	return qa;
}

float QA::work()
{
	int months = getExperience();
	if (manual)
	{
		float monthly = 40;
		return monthly * months;
	}

	float perMonth = 55;
	return perMonth * months;

}
