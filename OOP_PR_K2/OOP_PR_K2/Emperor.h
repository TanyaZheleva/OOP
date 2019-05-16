#pragma once
#include "Swordsman.h"

class Emperor :public Swordsman
{
public:
	Emperor(const char* _name, unsigned int _age);
	//~Emperor();
	void Work()override;
	citizen get()const override;
};