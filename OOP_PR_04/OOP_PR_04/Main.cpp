#include <iostream>
#include "Student.h"

int main()
{
	Student p;
	p.setName("Arthur");
	p.setFacultyNumber(69420);
	std::cout << p.getName()<<p.getFacultyNumber();


	return 0;
}