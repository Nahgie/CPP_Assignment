#include <iostream>
#include "Integer.h"

int main() {

	Integer n(30);
	std::cout << n.get() << " ";

	n.set(50);
	std::cout << n.get() << " ";

	Integer m("300");
	std::cout << m.get() << " ";
	std::cout << m.isEven();

	return 0;
}