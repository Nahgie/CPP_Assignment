#include "ConversationBook.h"

ConversationBook::ConversationBook() : ConversationBook(0, 0, "E", "M", "P", "T", "Y", "!") {}

ConversationBook::ConversationBook (int id, int price, std::string desc, std::string pd, std::string title, std::string author, std::string isbn, std::string lang) : Book(id, price, desc, pd, title, author, isbn) {

	this->language = lang;
}

void ConversationBook::show() {

	std::cout << "\n---상품 ID : " << this->getID() << std::endl;
	std::cout << "상품설명     : " << this->getDESC() << std::endl;
	std::cout << "생산자       : " << this->getPD() << std::endl;
	std::cout << "가격         : " << this->getPRICE() << std::endl;
	std::cout << "ISBN         : " << this->getISBN() << std::endl;
	std::cout << "책 제목      : " << this->getBookTitle() << std::endl;
	std::cout << "저자         : " << this->getAuthor() << std::endl;
	std::cout << "언어         : " << this->language << '\n' << std::endl;
}