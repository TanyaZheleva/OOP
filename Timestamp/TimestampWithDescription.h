#pragma once
#include"Timestamp.h"

class TWD :public Timestamp
{
public:
	TWD();
	TWD(unsigned long int _time, const char* _description);
	TWD(const TWD& old);
	TWD& operator=(const TWD& rhs);
	~TWD();

	void setDescription(const char* _description);
	const char* getDescription()const;
	friend std::ostream& operator <<(std::ostream& os, const TWD& rhs);
	friend std::istream& operator >>(std::istream& is, TWD& rhs);
private:
	char* description;
};