#pragma once
#include <iostream>

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
	/*
	bool operator ==(std::string book_name) {

		return this->book_name == book_name ? true : false;
	}

	bool operator == (const int& book_price) {

		return this->book_price == book_price ? true : false;
	}

	bool operator == (Book& b) {

		return this->book_name == b.book_name && this->book_price == b.book_price && this->book_pages == b.book_pages ? true : false;
	}*/

	friend bool operator == (Book& a , std::string book_name);
	friend bool operator == (Book& a , const int& book_price);
	friend bool operator == (Book& a, Book& b);
};