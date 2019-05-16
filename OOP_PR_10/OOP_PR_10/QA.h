#pragma once
#include "IT.h"

class QA:public IT
{
public:
	QA(char* _name = nullptr, int _experience = 0, int _salary = 600.0f, char* _project = nullptr, bool _manual = false);

	void setManual(bool _manual);
	bool getManual()const;

private:
	bool manual;
};