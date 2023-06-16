#include <iostream>
#include "MyIntStack.h"

int main() {

	MyIntStack a;

	for (int i = 0; i < 11; i++) {
		
		if (a.push(i)) { std::cout << i << " "; } 

		else { std::cout << std::endl << i + 1 << " 번째 stack full" << std::endl; }
	}

	int n;
	
	for (int i = 0; i < 11; i++) {

		if (a.pop(n)) { std::cout << n << " "; }

		else { std::cout << std::endl << i + 1 << " 번째 stack empty"; }
	}

	std::cout << std::endl;

	return 0;
}