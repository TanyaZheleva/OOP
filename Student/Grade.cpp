#include "Grade.h"
#include <iostream>

void Grade::gradeResize()
{
	float* temp = new float[gradesCapacity + expandBy];
	for (int i = 0; i < gradesCapacity; i++)
	{
		temp[i] = grades[i];
	}
	delete[] grades;
	grades = temp;
}

Grade::Grade()
{
	gradesCapacity = 0;
	expandBy = 10;
	currentSize = 10;
	this->grades = new float[gradesCapacity];
}

Grade::~Grade()
{
	delete[] grades;

}

void Grade::setGrade(float _grade)
{
	if (gradesCapacity == currentSize)
	{
		gradeResize();
	}
	grades[currentSize] = _grade;
	currentSize++;
}

float Grade:: getGrade()
{
	if (currentSize == 0)
	{
		return -1.0;
	}
	return this->grades[currentSize - 1];
}

void Grade:: printGrades()
{
	if (currentSize == 0)
	{
		std::cout << "Error!" << "\n";
		return;
	}
	for (int  i = 0; i < currentSize; i++)
	{
		std::cout << grades[i] << " " << "\n";
	}
}

float Grade::getAverage()
{
	float sum = 0;
	if (currentSize == 0)
	{
		return -1.0;
	}
	for (int i = 0; i < currentSize; i++)
	{
		sum += grades[i];
	}
	float average = sum / currentSize;
	return average;
}
