#include "Student.h"
#include <iostream>

int Len(const char* word)
{
	int count = 0;
	while (word[count] != 0)
	{
		count++;
	}
	return count;
}

void Student::StudentResize()
{
	char*temp = new char[capacity+expantionSize];
	for (int i = 0; i < capacity; i++)
	{
		temp[i] = name[i];
	}
	delete[] name;
	name = temp;
}

Student::Student()
{
	currentSize = 0;
	capacity = 10;
	expantionSize = 10;
	this->name = new char[capacity];
}

Student::~Student()
{
	delete[] this->name;
}

void Student::setName(const char* _name)
{
	if (currentSize == capacity)
	{
		StudentResize();
	}
	int size=Len(_name);
	for (int i = 0; i < size; i++)
	{
	   name[i] = _name[i];
	}
	name[size] = 0;
	currentSize=size;
}

char*Student::getName()
{

	return this->name;
}

void Student::setFacultyNumber(unsigned int _facultyNumber)
{
	this->facultyNumber = _facultyNumber;
}

unsigned int Student::getFacultyNumber()
{
	return this->facultyNumber;
}

int Student::getCourse()
{
	return this->course;
}

void Student::setCourse(int _course)
{
	this->group = _course;
}

int Student::getGroup()
{
	return this->group;
}

void Student::setGroup(int _group)
{
	this->group = _group;
}

void Student::setMajor(Major _major)
{
	this->major = _major;
}

int Student::getMajor()
{
	return this->major;
}