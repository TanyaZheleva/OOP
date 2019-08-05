#pragma once
#include "Passanger.h"

int GetLength(const char*);

class Bus
{
public:
	Bus();
	~Bus();
	Bus (const Bus& old);
	Bus& operator=(const Bus& rhs);
	
	void printAll()const;
	void PrintGratis()const;
	void TakeDownGratis();
	void AddPassanger(const Passanger& _new);
	void TakeDownPassanger(const char* _name);

	void SetYear(const unsigned _new);
	void SetLine(const unsigned _new);
	void SetCapacity(const int _new);
	void SetCount(const int _new);

	unsigned GetYear()const;
	unsigned GetLine()const;
	int GetCapacity()const;
	int GetCount()const;

private:
	Passanger* passangers;
	unsigned int year;
	unsigned int line;
	int capacity;
	int count;
};

