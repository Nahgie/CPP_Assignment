#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Book {
private :
	char* title;
	int price;
public :
	Book(const char* title, int price);
	Book(const Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { std::cout << title << " " << price << "원" << std::endl; }
};