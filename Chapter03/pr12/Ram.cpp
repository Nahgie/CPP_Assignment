#include "Ram.h"
#include <iostream>

Ram::Ram() {

	for (int i = 0; i < 102400; i++) { mem[i] = 0; }
	size = 102400;
}

Ram::~Ram() {

	std::cout << "메모리 제거됨" << std::endl;
}

char Ram::read(int address) {

	return mem[address];
}

void Ram::write(int address, char value) {

	mem[address] = value;
}