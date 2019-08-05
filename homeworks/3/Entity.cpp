#include "Entity.h"

std::vector<unsigned int>Entity::nextId;

Entity::Entity(Point2D* _location, std::string _name) :name(_name)
{
	location = _location->clone();
	id = rand();
	while (std::find(nextId.begin(), nextId.end(), id) != nextId.end())
	{
		id = rand();
	}
	nextId.push_back(id);
}

Entity::Entity(const Entity & old) :name(old.name)
{
	location = old.location->clone();
	id = rand();
	while (std::find(nextId.begin(), nextId.end(), id) != nextId.end())
	{
		id = rand();
	}
	nextId.push_back(id);
}

Entity & Entity::operator=(const Entity & other)
{
	if (this != &other)
	{
		name = other.name;
		delete location;
		location = other.location->clone();
		id = rand();
		while (std::find(nextId.begin(), nextId.end(), id) != nextId.end())
		{
			id = rand();
		}
		nextId.push_back(id);
	}
	return *this;
}

Entity::~Entity()
{
}

bool Entity::isAlive()const
{
	return true;
}

double Entity::getDistanceTo2D(const Entity& other)
{
	return location->getDistanceTo(other.location);
}


double Entity::getDistanceTo(const Entity & other)
{
	std::vector<double> currentCoordinates = location->getCoordinates();
	std::vector<double> otherCoordinates = other.location->getCoordinates();
	if (currentCoordinates.size() == 3 && otherCoordinates.size() == 3)
	{
		return  dynamic_cast<Point3D*>(location)->getDistanceTo((Point3D*)other.location);
	}
	return location->getDistanceTo(other.location);
}

void Entity::moveTo(const Point2D* _location)
{
	std::vector<double> currentCoordinates = location->getCoordinates();
	std::vector<double> otherCoordinates = _location->getCoordinates();
	location->setX(_location->getX());
	location->setY(_location->getY());
	if (currentCoordinates.size() == 3 && otherCoordinates.size() == 3)
	{
		dynamic_cast<Point3D*>(location)->setZ(((Point3D*)_location)->getZ());
	}
	else
	{
		delete[]location;
		location = new Point2D(_location->getX(), _location->getY());
	}
}


void Entity::moveTo(const Entity & other)
{
	if (this != &other)
	{
		std::vector<double> currentCoordinates = location->getCoordinates();
		std::vector<double> otherCoordinates = other.location->getCoordinates();

		location->setX(other.location->getX());
		location->setY(other.location->getY());
		if (currentCoordinates.size() == 3)
		{
			if (otherCoordinates.size() == 3)
			{
				dynamic_cast<Point3D*>(location)->setZ(((Point3D*)other.location)->getZ());
			}
			else
			{
				delete[]location;
				location = (other.location)->clone();
			}
		}

	}
	else
	{
		std::cout << "Same object!\n";
	}
}

Entity * Entity::clone() const
{
	return nullptr;
}
