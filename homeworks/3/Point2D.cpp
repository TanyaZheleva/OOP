#include "Point2D.h"

Point2D::Point2D(double _x, double _y)
	:x(_x),y(_y)
{}

double Point2D::getDistanceTo(const Point2D * other)
{
	return sqrt(pow(other->x - x, 2) + pow(other->y - y, 2));
}

Point2D * Point2D::clone()
{
	return new Point2D(*this);
}



double Point2D::getX() const
{
	return x;
}

double Point2D::getY() const
{
	return y;
}

void Point2D::setX(double _x)
{
	x=_x;
}

void Point2D::setY(double _y)
{
	y = _y;
}

std::vector<double> Point2D::getCoordinates() const
{
		std::vector<double> coordinates = { x,y };
		return coordinates;
	
}
