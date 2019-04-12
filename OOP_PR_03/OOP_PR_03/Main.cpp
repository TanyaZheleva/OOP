#include <iostream>
#include "Stack.h"

int main()
{
	Stack s;
	s.push(1);
	s.push(2);

	std::cout << s.peek();
	s.pop();
	std::cout << s.peek();
	s.pop();

	return 0;
}