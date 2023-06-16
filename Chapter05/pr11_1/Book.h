#pragma once
#include <iostream>

class Book {
private :
	std::string title;
	int price;
public :
	Book(std::string title, int price);
	void set(std::string title, int price);
	void show() { std::cout << this->title << " " << this->price << "원" << std::endl; }
};