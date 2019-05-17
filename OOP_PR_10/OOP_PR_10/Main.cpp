#include "Company.h"

int main()
{
	Programmer a("pesho", 1, 5000, "game", "java");
	Manager c("vanko", 11, 3000, 15);
	Manager b("gosho", 10, 6000,19);
	QA d("nasko", 5, 2000, "game", true);

	Company A;
	A.addEmployee(c);
	A.addEmployee(a);
	A.addEmployee(b);
	A.addEmployee(d);
	std::cout << A.getCurrent();
	//A.leftEmployee(c);
	//A.leftEmployee(b);
	//A.leftEmployee(d);
	//A.leftEmployee(a);

	/*A.fire();
	A.printCompany();
	std::cout << A.monthlySalaries()<<'\n';
	std::cout << A.averageMonthlyPay() << '\n';*/

	return 0;
}