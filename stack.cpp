#include "stack.h"
#include <iostream>

bool Stack::push(int x)
{
	if (top >= (size - 1))
	{
		std::cout << "Stack Overflow \n"; 
			return false;
	}
	else
		a[++top] = x;
	std::cout << x << " pushed into stack \n";
	return true;
}

int Stack::pop()
{
	if (top < 0)
	{
		std::cout << "Stack Underflow";
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}

bool Stack::empty()
{
	return (top < 0);
}
