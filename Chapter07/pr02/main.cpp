#include "Book.h"

bool operator ==(Book& a, std::string book_name) {
	
	return a.book_name == book_name ? true : false;
}

bool operator == (Book& a, const int& book_price) {

	return a.book_price == book_price ? true : false;
}

bool operator == (Book& a, Book& b) {

	return (a.book_name == b.book_name) && (a.book_price == b.book_price) && (a.book_pages == b.book_pages) ? true : false;
}

int main() {

	Book a1("명품 C++", 30000, 500), b1("고품 C++", 30000, 500);

	if (a1 == 30000) { std::cout << "정가 30000원" << std::endl; }
	if (a1 == "명품 C++") { std::cout << "명품 C++ 입니다." << std::endl; }
	if (a1 == b1) { std::cout << "두 책이 같은 책 입니다." << std::endl; }
}