#include "Librarian.h"

void Librarian::findBook(std::string data) {

	for (int find_idx = 0; find_idx < lib.size(); find_idx++) {

		if (lib.at(find_idx).getYears() == data) {

			std::cout << lib.at(find_idx).getYears() << " 년도, " << lib.at(find_idx).getTitle() << " , " << lib.at(find_idx).getAuthor() << std::endl;

		}else if (lib.at(find_idx).getTitle() == data) {

			std::cout << lib.at(find_idx).getYears() << " 년도, " << lib.at(find_idx).getTitle() << " , " << lib.at(find_idx).getAuthor() << std::endl;

		} else if (lib.at(find_idx).getAuthor() == data) {

			std::cout << lib.at(find_idx).getYears() << " 년도, " << lib.at(find_idx).getTitle() << " , " << lib.at(find_idx).getAuthor() << std::endl;
		}
	}
}

void Librarian::init() {

	std::cout << "입고할 책을 입력하세요. 년도에 \"-1\"을 입력하면 입고를 종료합니다." << std::endl;

	std::string year, title, author, user_input;


	while (true) {


		std::cout << "년도 >> ";	
		std::getline(std::cin,year);

		if (year == "-1") { break; } //-1이 입력되면 입고종료

		std::cout << "책이름 >> ";	
		std::getline(std::cin, title);
		
		std::cout << "저자 >> ";	
		std::getline(std::cin, author);
		
		Book tmp(year, title, author);
		lib.push_back(tmp);
	}

	std::cout << "총 입고된 책은 "<< lib.size() <<"권입니다.\n검색하고자 하는 저자 이름을 입력하세요 >> ";
	std::cin >> user_input;
	findBook(user_input);

	std::cout << "검색하고자 하는 년도를 입력하세요 >> ";
	std::cin >> user_input;
	findBook(user_input);
}