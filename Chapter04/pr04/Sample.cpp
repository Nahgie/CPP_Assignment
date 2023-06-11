#include <iostream>
#include "Sample.h"

void Sample::read() {

	for (int i = 0; i < size; i++) {

		std::cin >> p[i];
	
	}
}

void Sample::write() {

	for (int i = 0; i < size; i++) {

		std::cout << p[i] << " ";

	}
	std::cout << std::endl;
}

int Sample::big() {

	int result = 0;

	for (int i = 0; i < size; i++) {
		
		if (result < p[i]) { result = p[i]; }
	
	}

	return result;
}