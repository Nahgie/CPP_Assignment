#include "IntStack.h"
#include <iostream>

int main() {

	IntStack ist(10);

	for (int i = 0; i <= 10; i++) {

		if (ist.push(i)) {

			std::cout << "push " << i << std::endl;

		} else {

			std::cout << "\n스택이 가득 찼습니다.\n요소 갯수 : " << ist.size() << '\n' << std::endl;
		
		}
	}

	int data;

	for (int j = 0; j <= 10; j++) {
	
		if (ist.pop(data)) {

			std::cout << "pop " << data << std::endl;

		} else {

			std::cout << "\n스택이 비었습니다.\n요소 갯수 : " << ist.size() << '\n' << std::endl;

		}
	}
}