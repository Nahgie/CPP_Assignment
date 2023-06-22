#include "Book.h"

bool operator < (std::string book_name, Book& op) {
	return (book_name < op.book_name) ? true : false;
}

int main() {
	Book a("청춘", 20000, 300);
	std::string b;
	std::cout << "책 이름을 입력하세요 >>";
	std::getline(std::cin,b);
	if (b < a) { std::cout << a.getTitle() << " 이 " << b << "보다 뒤에 있구나!" << std::endl; }
}