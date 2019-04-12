#pragma once

const int ManufacturerCapacity = 30;

class Manufacturer
{
public:
	Manufacturer();
	~Manufacturer();
	const char* getManufacturer();
	void setManufacturer(const char* _manufacturer);

private:
	char manufacturer[ManufacturerCapacity];
};
