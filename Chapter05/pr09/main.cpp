#include <iostream>
#include "Accumlator.h"

int main() {

	Accumlator acc(10);
	acc.add(5).add(6).add(7);

	std::cout << acc.get() << std::endl;


	return 0;
}