#pragma once

enum Major
{
	SoftwareEngineering = 0,
	ComputerScience,
	Informatics,
	InformationSystems,
	Mathematics,
	MathematicsAndInformatic,
	Statistics,
	AppliedMathematics
};

class Student
{
public:
	Student();
	~Student();
	void StudentResize();
	void setName(const char* _name);
	char* getName();
	void setFacultyNumber(unsigned int _facultyNumber);
	unsigned int getFacultyNumber();
	int getCourse();
	void setCourse(int _course);
	int getGroup();
	void setGroup(int _group);
	void setMajor(Major _major);
	int getMajor();
private:
	char* name;
	unsigned int facultyNumber;
	int capacity;
	int currentSize;
	int expantionSize;
	int group;
	int course;
	Major major;
};

