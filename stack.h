#pragma once
//#define size 100
class Stack
{
public:
	Stack() { top = -1; }
	~Stack(){}

	int a[100];

	int pop();
	bool push(int x);
	bool empty();

private:
	int top;
};
