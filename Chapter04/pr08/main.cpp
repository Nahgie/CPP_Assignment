#include <iostream>
#include "Circle.h"

int main() {
	
	int Arrays = 0, sum = 0;

	std::cout << "원의 개수 >>";
	std::cin >> Arrays;

	Circle *circles = new Circle[Arrays];

	for (int i = 0; i < Arrays; i++) {
		
		int tmp = 0;

		std::cout << "원 " << (i + 1) << "의 반지름 >> ";
		std::cin >> tmp;
		circles[i].setRadius(tmp);

		if (circles[i].getArea() > 100) { sum++; }

	}

	std::cout << "면적이 100보다 큰 원은 " <<  sum << "개 입니다." << std::endl;

	delete[] circles;

	return 0;
}