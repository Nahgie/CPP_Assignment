#include "Stack.h"

int main() {

	Stack stack;
	stack << 3 << 5 << 10;

	while (true) {
		if (!stack) { break; }
		int x;
		stack >> x;
		std::cout << x << " ";
	}
	
	std::cout << std::endl;
}