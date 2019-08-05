#pragma once
#include "Point2D.h"
class Point3D :public Point2D
{
public:
	Point3D(double _x=0, double _y=0, double _z=0);
	double getDistanceTo(const Point3D* other);
	Point2D* clone() override;
	double getZ()const;
	void setZ(double _z);

	std::vector<double> getCoordinates()const override;
private:
	double z;
};

