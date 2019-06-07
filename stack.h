#pragma once
//#define N 100
class Stack
{
public:
	Stack() { top = -1; }
	~Stack(){}

	int a[N];

	int pop();
	bool push(int x);
	bool empty();

private:
	int top;
};
