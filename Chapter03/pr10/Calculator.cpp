#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"



int main() {

	Add Ad;
	Sub Sb;
	Mul Ml;
	Div Dv;

	int a = -1, b = -1;
	char c{};
	
	while (a != 0 && b != 0) {

		std::cout << "두 정수와 연산자를 입력하세요 >>";
		std::cin >> a >> b >> c;

		if (a == 0 || b == 0) {

			std::cout << "허용되지 않는 조작입니다." << std::endl;
			break;

		}

		switch (c) {

		case '+':

			Ad.setValue(a,b);
			std::cout << Ad.calculate() << std::endl;

			break;

		case '-':

			Sb.setValue(a, b);
			std::cout << Sb.calculate() << std::endl;

			break;

		case '*':

			Ml.setValue(a, b);
			std::cout << Ml.calculate() << std::endl;

			break;

		case '/':

			Dv.setValue(a, b);
			std::cout << Dv.calculate() << std::endl;

			break;

		default:

			std::cout << "허용되지 않는 조작입니다." << std::endl;

			break;
		}
	}
	return 0;
}