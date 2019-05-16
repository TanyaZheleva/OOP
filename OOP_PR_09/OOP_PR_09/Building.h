#pragma once
#include <iostream>

class Building
{
public:
	//Building();
	Building(const char* _address = nullptr, int _height = 10, float _area = 10.0f);
	~Building();
	Building(const Building& old);
	Building& operator= (const Building& rhs);

	void setAddress(const char* _address);
	const char* getAddress()const;
	void setHeight(int _height);
	int getHeight()const;
	void setArea(float _area);
	float getArea()const;

	void read(Building& rhs);
	void print(const Building& rhs);
	friend std::ostream& operator<<(std::ostream& os, const Building& rhs);
	friend std::istream& operator>>(std::istream& is, Building& rhs);
private:
	char* address;
	int height;
	float area;
};
