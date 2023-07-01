#include <iostream>
#include "Circle.h"

template <class T>
T bigger(T a, T b) {
	if (a > b) { return a; }
	else { return b; }
}

int main() {
	
	int a = 20, b = 50 , c;
	c = bigger(a, b);
	std::cout << a << "과 " << b << "중 큰 값은 " << c << std::endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	std::cout << "waffle과 pizza 중 큰 것의 반지름은" << y.getRadius() << std::endl;
}