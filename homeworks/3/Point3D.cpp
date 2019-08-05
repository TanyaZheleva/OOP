#include "Point3D.h"

Point3D::Point3D(double _x, double _y, double _z)
:Point2D(_x,_y),z(_z)
{}

double Point3D::getDistanceTo(const Point3D* other)
{
	return sqrt(pow(other->getX() - getX(), 2) + pow(other->getY() - getY(), 2) +pow(other->z - z, 2));
}

Point2D * Point3D::clone()
{
	return new Point3D(*this);
}

double Point3D::getZ() const
{
	return z;
}

void Point3D::setZ(double _z)
{
	z = _z;
}

std::vector<double> Point3D::getCoordinates() const
{
	std::vector<double>coordinates = { getX(),getY(),z };
	return coordinates;
}