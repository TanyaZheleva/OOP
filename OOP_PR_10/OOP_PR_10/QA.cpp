#include"QA.h"

QA::QA(char * _name, int _experience, int _salary, char * _project, bool _manual)
{
	IT::IT(_name, _experience, _salary, _project);
	this->setManual(_manual);
}

void QA::setManual(bool _manual)
{
	manual = _manual;
}

bool QA::getManual() const
{
	return manual;
}
