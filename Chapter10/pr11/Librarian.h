#pragma once
#include <vector>
#include <iostream>
#include "Book.h"

class Librarian {
private :

	std::vector<Book> lib;

	void findBook(std::string data);

public :

	void init();
};