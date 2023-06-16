#pragma once
class MyIntStack {
private :
	int *p;
	int size;
	int tos;
public :
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();

	bool push(int n);
	bool pop(int& n);
};