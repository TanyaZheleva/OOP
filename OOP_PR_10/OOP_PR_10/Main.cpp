#include "Company.h"

int main()
{
	Programmer a("pesho", 10, 5000,"game", "java");
	Employee b("gosho", 20, 6000);
	Manager c("vanko", 11, 3000, 15);
	QA d("nasko", 5, 2000, "game", true);
	
	Company A;
	A.addEmployee(a);
	A.addEmployee(c);
	A.addEmployee(b);
	A.addEmployee(d);
	//A.leftEmployee(c);
	//A.leftEmployee(b);
	//A.leftEmployee(d);
	//A.leftEmployee(a);
	
	for (int i = 0; i < A.current; i++)
	{
		(*A.employees[i]).print();
		std::cout << "\n";
	}

	
	return 0;
}