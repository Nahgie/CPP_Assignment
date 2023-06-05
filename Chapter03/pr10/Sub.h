#pragma once
class Sub {
private:
	int num1 = 0, num2 = 0;

public:
	Sub() : Sub(1, 1) {}
	Sub(int x, int y);

	void setValue(int x, int y);
	int calculate();
};