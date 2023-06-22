#pragma once
#include <iostream>
#include <string>

class Book {
private :
	std::string book_name;
	int book_price, book_pages;
public :
	Book(std::string book_name, const int& book_price, const int& book_pages) {
		this->book_name = book_name;
		this->book_price = book_price;
		this->book_pages = book_pages;
	}

	friend bool operator < (std::string book_name, Book& op);
	std::string getTitle() { return book_name; }
};