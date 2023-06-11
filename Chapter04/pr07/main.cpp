#include <iostream>
#include "Circle.h"

int main() {

	Circle circles[3];
	
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		
		int tmp = 0;

		std::cout << "원 " << (i + 1) << "의 반지름 >> ";
		std::cin >> tmp;
		circles[i].setRadius(tmp);

		if (circles[i].getArea() > 100) { sum++; }

	}

	std::cout << "면적이 100보다 큰 원은 " <<  sum << "개 입니다." << std::endl;

	return 0;
}