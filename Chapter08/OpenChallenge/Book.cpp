#include "Book.h"

Book::Book() : Book(0, 0, "E", "M", "P", "T", "Y") {}

Book::Book(int id, int price, std::string desc, std::string pd, std::string title, std::string author, std::string isbn) : Product(id ,price ,desc ,pd) {
	
	this->book_title = title;
	this->author = author;
	this->ISBN = isbn;
}

void Book::show() {

	std::cout << "\n---상품 ID : " << this->getID() << std::endl;
	std::cout << "상품설명     : " << this->getDESC() << std::endl;
	std::cout << "생산자       : " << this->getPD() << std::endl;
	std::cout << "가격         : " << this->getPRICE() << std::endl;
	std::cout << "ISBN         : " << this->ISBN << std::endl;
	std::cout << "책 제목      : " << this->book_title << std::endl;
	std::cout << "저자         : " << this->author << '\n' << std::endl;
}