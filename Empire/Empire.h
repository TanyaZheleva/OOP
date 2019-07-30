#pragma once
//#include <vector>
#include "Slave.h"

class Empire
{
public:
	Empire();
	Empire(Slave* _population, const char* _empireName);
	~Empire();
	Empire(const Empire& old);
	Empire& operator= (const Empire& rhs);

	int Size()const;
	void addCitizen(const Slave& _citizen);
private:
	char* empireName;
	//std::vector<Slave*> population;
	Slave* population;
};