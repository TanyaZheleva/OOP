#pragma once
#include <math.h>
#include <vector>
class Point2D
{
public:
	Point2D(double _x=0, double _y=0);
	 double getDistanceTo(const Point2D* other);
	virtual Point2D* clone();
	double getX()const;
	double getY()const;
	void setX(double _x);
	void setY(double _y);

	virtual std::vector<double> getCoordinates()const;
private:
	double x;
	double y;
};

