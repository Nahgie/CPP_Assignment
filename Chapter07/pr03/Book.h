#pragma once
#include <iostream>

class Book {
private :
	std::string book_name;
	int book_price, book_pages;
public :
	Book(std::string bookname , const int& book_price , const int& book_pages) {
		this->book_name = bookname;
		this->book_price = book_price;
		this->book_pages = book_pages;
	}
	bool operator !() { return (this->book_price == 0) ? true : false; }
};