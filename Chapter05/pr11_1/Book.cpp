#include "Book.h"

Book::Book(std::string title, int price) {
	
	this->title = title;
	this->price = price;
}

void Book::set(std::string title, int price) {

	this->title = title;
	this->price = price;

}