#include "stack.h"
#include <iostream>

int main()
{
	Stack s;

	s.push(10);
	s.push(20);
	s.push(30);

	std::cout << s.pop() << " Popped from stack \n";
	std::cout << s.pop() << " Popped from stack \n";

	system("pause");
}