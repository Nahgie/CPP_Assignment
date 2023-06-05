#pragma once
class Mul {
private:
	int num1 = 0, num2 = 0;

public:
	Mul() : Mul(1, 1) {}
	Mul(int x, int y);

	void setValue(int x, int y);
	int calculate();
};