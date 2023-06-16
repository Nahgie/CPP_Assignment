#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"

Book::Book(const char* title, int price) {

	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;

}

Book::Book(const Book& b) {

	int size = strlen(b.title);

	this->title = new char[size + 1];

	for (int i = 0; i < size; i++) {

		this->title[i] = b.title[i];
	
	}

	this->price = b.price;

}

Book::~Book() {
	delete[] title;
}

void Book::set(const char* title, int price) {
	
	delete[] this->title;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;

}