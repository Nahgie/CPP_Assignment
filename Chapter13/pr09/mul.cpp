#include <iostream>

extern "C" { int get(); }

int main() {
	
	int a, b;

	a = get();
	b = get();

	std::cout << "곱은 " << a * b << "입니다." << std::endl;
}