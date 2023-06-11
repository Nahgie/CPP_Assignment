#include <iostream>
#include "Person.h"

int main() {
	
	Person person[3];
	std::string search_name;

	std::cout << "이름과 전화 번호를 입력해 주세요" << std::endl;

	for (int i = 0; i < 3; i++) {

		std::string name_tmp, tel_tmp;
		std::cout << "사람 " << (i + 1) << " >> ";

		std::cin >> name_tmp >> tel_tmp;
		person[i].set(name_tmp , tel_tmp);

	}

	std::cout << "모든 사람의 이름은 ";

	for (int i = 0; i < 3; i++) {

		std::cout << person[i].getName() << " ";

	}

	std::cout << std::endl;

	std::cout << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
	std::cin >> search_name;

	for (int i = 0; i < 3; i++) {
		if (search_name == person[i].getName()){
			
			std::cout << person[i].getTel() << std::endl;
		
		}
	}
	return 0;
}