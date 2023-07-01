#include <iostream>

int main() {

	for (int n = 0; n < 4; n++) {
		for (int i = 0; i < n+1; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
} 