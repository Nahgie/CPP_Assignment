#pragma once
#include <string>
#include <iostream>

class ingredient {
private :
	std::string name;
public :

	ingredient(std::string name) { this->name = name; }

	void getStockHis(int pcs) {

		std::cout << this->getName() << "\t: ";

		for (int srch = 0; srch < pcs; srch++) { std::cout << '*'; }

		std::cout << std::endl;
	}

	std::string getName() { return this->name; }
};