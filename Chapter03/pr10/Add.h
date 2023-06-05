#pragma once
class Add {
private :
	int num1 = 0, num2 = 0;

public :
	Add() : Add(1, 1) {}
	Add(int x, int y);

	void setValue(int x, int y);
	int calculate();
};