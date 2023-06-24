#include "NamedCircle.h"

void compareCircle(NamedCircle arr[]) {
	
	int max_value = 0;
	std::string max_name;

	for (int srch_idx = 0; srch_idx < 5; srch_idx++) {
		if (arr[srch_idx].getArea() > max_value) {

			max_value = arr[srch_idx].getArea() , max_name = arr[srch_idx].getCName();
		
		}
	}

	for (int find_idx = 0; find_idx < 5; find_idx++) {
		if (arr[find_idx].getArea() == max_value && arr[find_idx].getCName() == max_name) {

			std::cout << "가장 면적이 큰 피자는 " << arr[find_idx].getCName() << std::endl;
		
		}
	}
}

int main() {

	NamedCircle pizza[5];

	int tmp_r = 0;
	std::string tmp_name;

	std::cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << std::endl;

	for (int i = 0; i < 5; i++) {

		std::cout << (i + 1) << " >> ";
		std::cin >> tmp_r >> tmp_name;

		pizza[i].setRadius(tmp_r), pizza[i].setCName(tmp_name);
	}

	compareCircle(pizza);
}