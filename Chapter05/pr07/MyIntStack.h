﻿#pragma once
class MyIntStack {
private :
	int p[10];
	int tos;
public :
	MyIntStack();
	bool push(int n);
	bool pop(int& n);
};