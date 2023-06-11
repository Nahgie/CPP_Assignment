#include <iostream>
#include "CIrcleManager.h"

int main() {
	
	int cr_index = 0;

	std::cout << "원의 개수 >>";
	std::cin >> cr_index;

	CircleManager CM(cr_index);

	for (int i = 0; i < cr_index; i++) {

		std::string tmp_name;
		int tmp_size = 0;

		std::cout << "원 " << (i + 1) << "의 이름과 반지름 >> ";
		std::cin >> tmp_name >> tmp_size;
		CM.setCircle(i, tmp_name, tmp_size);

	}

	CM.searchByName();
	CM.searchByArea();


	return 0;
}