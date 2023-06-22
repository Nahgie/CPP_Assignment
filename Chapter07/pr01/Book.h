#pragma once
#include <string>
#include <iostream>

class Book {
private :
	std::string book_name;
	int book_price = 0, book_pages = 0;
public :
	Book(std::string book_name, const int& book_price, const int& book_pages);
	
	/*Book& operator += (const int& price) {

		this->book_price += price;
		return *this;
	}
	
	Book& operator -= (const int& price) {
		this->book_price -= price;
		return *this;
	}*/

	Book& operator += (const int& price);
	Book& operator -= (const int& price);
	void show();
};