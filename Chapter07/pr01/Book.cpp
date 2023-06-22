#include "Book.h"

Book::Book(std::string book_name , const int& book_price , const int& book_pages) {

	this->book_name = book_name;
	this->book_price = book_price;
	this->book_pages = book_pages;
}

void Book::show() {

	std::cout << this->book_name << " " << this->book_price << " " << this->book_pages << std::endl;

}

Book& Book::operator+= (const int& price) {
	
	this->book_price += price;
	return *this;
}

Book& Book::operator-= (const int& price) {
	
	this->book_price -= price;
	return *this;
}