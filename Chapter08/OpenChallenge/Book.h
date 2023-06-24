#pragma once
#include "Product.h"

class Book : public Product{
private :

	std::string book_title; //책 이름
	std::string author; //저자
	std::string ISBN; //ISBN

public :

	Book();
	Book(int id, int price, std::string desc, std::string pd ,std::string title , std::string author , std::string isbn);

	//Getter
	std::string getBookTitle() { return this->book_title; }
	std::string getAuthor() { return this->author; }
	std::string getISBN() { return this->ISBN; }

	//Function
	void show();
};