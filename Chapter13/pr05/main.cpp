#include <iostream>

void mTable() {

	int n;

	std::cout << "양수입력 >> ";
	std::cin >> n;

	if (std::cin.fail() == 1) { throw -1; }

	else if (n < 1 || n >9) { throw -2; }

	for (int i = 1; i <= 9; i++) {

		std::cout << n << " x " << i << " = " << n * i << '\t';
	}
	std::cout << std::endl;
}

int main() {

	while (true) {

		try {

			mTable();
		
		} catch (int errValue) {
			
			if (errValue == -1) {

				std::cout << "입력 오류가 발생하여 더 이상 입력되지 않습니다. 프로그램을 종료합니다." << std::endl;
				break;
			
			} else if (errValue == -2) {
			
				std::cout << "잘못된 입력입니다. 1~9 사이의 정수만 입력하세요" << std::endl;
			}
		}
	}
}