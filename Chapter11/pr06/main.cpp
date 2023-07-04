#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

	std::cout << std::setw(15) << std::left << "Number";
	std::cout << std::setw(15) << std::left << "Square";
	std::cout << std::setw(15) << std::left << "Square Root" << std::endl;

	for (int value = 0; value <= 45; value += 5) {

		std::cout << std::setw(15) << std::left << std::setfill('-') << value;
		std::cout << std::setw(15) << std::left << std::setfill('-') << value * value;
		std::cout << std::setw(15) << std::left << std::setfill('-') << std::setprecision(3) << std::sqrt(value) << std::endl;
	}
}