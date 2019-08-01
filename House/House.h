#pragma once
#include "Building.h"

class House : public Building
{
public:
	//House();
	~House();
	House(const char * _address, const char*_owner, int _levels, int _height, float _area);
	House(const House& old);
	House& operator= (const House& rhs);

	void setOwner(const char* _owner);
	const char* getOwner()const;

	void setLevels(int _levels);
	int getLevels()const;

	friend std::istream& operator>>(std::istream& is, House& rhs);
	friend std::ostream& operator<<(std::ostream& os, House& rhs);
	friend House& Max(const House* arr, int size);

private:
	char* owner;
	int levels;
};


template <class T>
class base {};

template <class T,class U>
class der :public base<U>
{};