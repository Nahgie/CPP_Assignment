#include "Librarian.h"

Librarian::Librarian() { lib = new Book; }

Librarian::~Librarian() { delete lib; }

void Librarian::findBook(std::string data) {

	for (int find_year = 0; find_year < lib->getSavedCount(); find_year++) {

		if (lib->getYears(find_year) == data) {

			std::cout << lib->getYears(find_year) << " 년도, " << lib->getTitle(find_year) << " , " << lib->getAuthor(find_year) << std::endl;

		}else if (lib->getTitle(find_year) == data) {

			std::cout << lib->getYears(find_year) << " 년도, " << lib->getTitle(find_year) << " , " << lib->getAuthor(find_year) << std::endl;
		
		} else if (lib->getAuthor(find_year) == data) {

			std::cout << lib->getYears(find_year) << " 년도, " << lib->getTitle(find_year) << " , " << lib->getAuthor(find_year) << std::endl;
		}
	}

}

void Librarian::init() {

	std::cout << "입고할 책을 입력하세요. 년도에 \"-1\"을 입력하면 입고를 종료합니다." << std::endl;

	std::string year, title, author;

	while (true) {


		std::cout << "년도 >> ";	
		std::getline(std::cin,year);

		if (year == "-1") { break; } //-1이 입력되면 입고종료

		std::cout << "책이름 >> ";	
		std::getline(std::cin, title);
		
		std::cout << "저자 >> ";	
		std::getline(std::cin, author);
		
		lib->setData(year, title, author);
	}

	for (int loops = 0; loops < lib->getSavedCount(); loops++) {

		std::string user_input;

		if (loops == 0) {
		
			std::cout << "총 입고된 책은 2권입니다.\n검색하고자 하는 저자 이름을 입력하세요 >> ";
			std::cin >> user_input;

			findBook(user_input);

		} else if (loops == 1) {
			
			std::cout << "검색하고자 하는 년도를 입력하세요 >> ";
			std::cin >> user_input;

			findBook(user_input);
		}
	}
}