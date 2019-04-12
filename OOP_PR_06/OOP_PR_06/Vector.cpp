#include "Vector.h"

Vector::Vector()
{

}

Vector::Vector(float _x, float _y, float _z) :
	x(_x), y(_y), z(_z)
{
}

Vector::~Vector()
{
}

Vector::Vector(const Vector& old) :
	x(old.x), y(old.y), z(old.z)
{
}

Vector& Vector:: operator= (const Vector& rhs)
{
	if (this != &rhs)
	{
		this->x = rhs.x;
		this->y = rhs.y;
		this->z = rhs.z;
	}
	return *this;
}

void Vector::setX(const float _x)
{
	this->x = _x;
}
void Vector::setY(const float _y)
{
	this->y = _y;
}
void Vector::setZ(const float _z)
{
	this->z = _z;
}

float Vector::getX()const
{
	return this->x;
}
float Vector::getY()const
{
	return this->y;
}
float Vector::getZ()const
{
	return this->z;
}

Vector operator+(const Vector& lhs,const Vector& rhs)
{
	Vector _new;
	_new.setX(lhs.getX()+ rhs.getX());
	_new.setY(lhs.getY() + rhs.getY());
	_new.setZ(lhs.getZ() + rhs.getZ());
	return _new;
}

Vector operator-(const Vector& lhs, const Vector& rhs)
{
	Vector _new;
	_new.setX(lhs.getX() - rhs.getX());
	_new.setY(lhs.getY() - rhs.getY());
	_new.setZ(lhs.getZ() - rhs.getZ());
	return _new;
}

Vector operator* (const Vector& vec, float num)
{
	Vector _new;
	_new.setX(vec.getX() *num);
	_new.setY(vec.getY() *num);
	_new.setZ(vec.getZ()*num);
	return _new;
}

std::ostream& operator << (std::ostream& os, const Vector& vec)
{
	return os<< vec.getX() << " " << vec.getY() << " " << vec.getZ() << "\n";
}

std::istream& operator >> (std::istream& is, Vector& vec)
{
	return is >> vec.x >> vec.y >> vec.z;
}

Vector operator / (const Vector& lhs, const Vector& rhs)
{
	Vector _new;
	_new.setX(lhs.getX() * rhs.getX());
	_new.setY(lhs.getY() * rhs.getY());
	_new.setZ(lhs.getZ() * rhs.getZ());
	return _new;
}

Vector operator ^ (const Vector& lhs, const Vector& rhs)
{
	Vector _new;
	_new.setX(lhs.getY() * rhs.getZ()- rhs.getY() * lhs.getZ());
	_new.setY(lhs.getZ() * rhs.getX() - rhs.getZ() * lhs.getX());
	_new.setZ(lhs.getX() * rhs.getY() - rhs.getX() * lhs.getY());
	return _new;
}