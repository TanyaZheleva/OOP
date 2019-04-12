#include "Vector.h"

int main()
{
	Vector v1(1, 6.2, 9);
	Vector v2;
	v2.setX(5);
	v2.setY(4);
	v2.setZ(8);
	Vector v3 = v2;
	Vector v4;
	v4 = v1;
	Vector v5 = v4 + v2;
	Vector v6 = v5 - v2;
	Vector v7 = v1 * 5;
	Vector v8;
	std::cout << v1;
	std::cout << v2;
	std::cout << v3;
	std::cout << v4;
	std::cout << v5;
	std::cout << v6;
	std::cout << v7;
	std::cin >> v8;
	std::cout << v8;
	return 0;
}