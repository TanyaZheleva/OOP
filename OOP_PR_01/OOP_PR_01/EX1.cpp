#include<iostream>

void swap(int &a,int  &b)
{
	int temp = a;
	a = b;
	b = temp;;
}

int main()
{
	int x = 1;
	int y = 2;
	swap(x, y);
	std::cout << x << "\n" << y;
}