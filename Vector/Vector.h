#pragma once
#include <iostream>

class Vector
{
public:

	Vector();
	Vector(float _x, float _y, float _z);
	~Vector();
	Vector(const Vector& old);
	Vector& operator= (const Vector& rhs);

	void setX(const float _x);
	void setY(const float _y);
	void setZ(const float _z);

	float getX()const;
	float getY()const;
	float getZ()const;

friend std::istream& operator >> (std::istream& is, Vector& vec);
private:

	float x;
	float y;
	float z;

};

Vector operator+(const Vector& lhs, const Vector& rhs);
Vector operator-(const Vector& lhs, const Vector& rhs);
Vector operator*(const Vector& vec, float num);
std::ostream& operator << (std::ostream& os, const Vector&);
Vector operator / (const Vector& lhs, const Vector& rhs);
Vector operator ^ (const Vector& lhs, const Vector& rhs);