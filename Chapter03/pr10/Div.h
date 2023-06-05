#pragma once
class Div {
private:
	int num1 = 0, num2 = 0;

public:
	Div() : Div(1, 1) {}
	Div(int x, int y);

	void setValue(int x, int y);
	int calculate();
};