#include"DIsplay.h"

Display::Display()
{
}

Display::~Display()
{

}

int Display::getSize() 
{
	return this->size;
}

int Display::getColoutcount()
{
	return this->colourcount;
}

void Display::setSize(int _size)
{
	this->size = _size;
}

void Display::setColourCount(int  _coloutcount)
{
	this->colourcount = _coloutcount;
}