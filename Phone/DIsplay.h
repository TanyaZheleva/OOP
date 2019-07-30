#pragma once

const int sizeCapacity = 60;
const int colourCapacity = 1652;

class Display
{
public:
	Display();
	~Display();
	int getSize();
	int getColoutcount();
	void setSize(int _size);
	void setColourCount(int  _coloutcount);

private:
	int size = sizeCapacity;
	int colourcount= colourCapacity;
};