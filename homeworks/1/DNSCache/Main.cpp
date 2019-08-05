#include "DNSCache.h"

int main()
{
	
	DNSRecord test1("testName1", "12.3432.444");
	DNSRecord test2("testName2", "24.5436.404");
	test2 = test1;

	//std::cin >> test2;

	std::cout << test2.getDomainName()<<"\n";
	std::cout << test2.getIPAddress();
	DNSCache test;
	test.add(test1);
	test.add(test2);
	std::cout << test.lookup("testName1")<<"\n";
	//test.flush();
	//test.print();



	return 0;
}