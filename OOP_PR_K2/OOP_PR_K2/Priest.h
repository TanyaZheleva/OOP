#pragma once
#include "Slave.h"

class Priest:public Slave
{
public:
	Priest(const char* _name, unsigned int _age);
	//~Priest();
	void Work()override;
	citizen get()const override;
};