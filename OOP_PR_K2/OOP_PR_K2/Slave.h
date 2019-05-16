#pragma once
#include <iostream>

enum citizen { slave, soldier, scholar, priest, archer, swordsman, emperor };

class Slave
{
public:
	Slave(const char* _name,unsigned int _age);
	Slave();
	~Slave();
	Slave(const Slave& old);
	Slave& operator = (const Slave& rhs);
	virtual void Work();
	virtual citizen get() const;

private:
	char* name;
	unsigned int age;
};