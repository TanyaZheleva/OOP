#pragma once

class Grade
{
public:
	Grade();
	~Grade();
	void gradeResize();
	float getAverage();
	void setGrade(float _grade);
	float getGrade();
	void printGrades();
	
private:
	float* grades;
	int gradesCapacity;
	int expandBy;
	int currentSize;
};