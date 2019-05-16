#pragma once
#include "Slave.h"

class Scholar : public Slave
{
public:
	Scholar(const char* _name, unsigned int _age);
	//~Scholar();
	void Work()override;
	citizen get()const override;
};