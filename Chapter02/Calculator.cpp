#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

int main() {

	int num1 = 0, num2 = 0;
	char *oprt = {};

	char formula[11];

	//strtok()은 최종적으로 분리된 위치를 기억하고 있다가 작업 재개가 가능( static 변수로 저장됨)
	//atoi()는 문자열을 숫자로 변환시켜줌
	std::cin.getline(formula,10);
	num1 = atoi(strtok(formula , " "));
	oprt = strtok( NULL , " ");
	num2 = atoi(strtok( NULL , " "));

	if (*oprt == '+') {

		std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 + num2 << std::endl;

	}
	else if (*oprt == '-') {

		std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 - num2 << std::endl;

	}
	else if (*oprt == '*') {

		std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 * num2 << std::endl;

	}
	else if (*oprt == '/') {

		std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 / num2 << std::endl;

	}
	else if (*oprt == '%') {

		std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 % num2 << std::endl;

	}
	else {

		std::cout << "잘못된 요청입니다." << std::endl;

	}

	return 0;
}
/*int main() { // 기능은 같지만 방향성이 달라서 주석처리
	
	int num1 = 0, num2 = 0;
	char oprt = {};

	while (1) {
		
		std::cout << "? ";
		std::cin >> num1 >> oprt >> num2;

		if (oprt == '+') {

			std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 + num2 << std::endl;

		} else if (oprt == '-') {

			std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 - num2 << std::endl;

		} else if (oprt == '*') {

			std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 * num2 << std::endl;

		} else if (oprt == '/') {
			
			std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 / num2 << std::endl;

		} else if (oprt == '%') {

			std::cout << num1 << " " << oprt << " " << num2 << " = " << num1 % num2 << std::endl;

		} else {

			std::cout << "잘못된 요청입니다." << std::endl;
			break;
		}
	}

	return 0;
}*/