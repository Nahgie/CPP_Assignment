#pragma once
#include "Book.h"

class Librarian {
private :

	Book* lib;

	void findBook(std::string data);

public :

	Librarian();
	~Librarian();
	void init();
};