#pragma once
#include "ingredient.h"

class CoffeeBean : public ingredient {
private :
	int pcs;
public:
	CoffeeBean(std::string name = "Coffee", int pcs = 3) : ingredient(name) { this->pcs = pcs; }

	int getStock() { return this->pcs; }
	void setStock(int pcs) { this->pcs = pcs; }
	void minusStock(int pcs) {

		if ((this->pcs - pcs) < 0) { std::cout << this->getName() << "이(가) 부족합니다.\n" << std::endl; }

		else { this->pcs -= pcs; }
	}
};