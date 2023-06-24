#include <iostream>
#include "RAM.h"
#include "ROM.h"

int main() {

	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) { mainMemory.write(i,biosROM.read(i)); }
	for (int i = 0; i < 5; i++) { std::cout << mainMemory.read(i); }
}