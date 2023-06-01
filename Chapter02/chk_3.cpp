#include <iostream>

int main() {

	int radius = 0;
	const static double pi = 3.14;

	std::cin >> radius;

	double area = (radius * radius) * pi;

	std::cout << area << std::endl;

	return 0;
}