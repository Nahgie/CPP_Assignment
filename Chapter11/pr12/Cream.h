#pragma once
#include "ingredient.h"

class Cream : public ingredient {
private :
	int pcs;
public:
	Cream(std::string name = "Cream", int pcs = 3) : ingredient(name) { this->pcs = pcs; }

	int getStock() { return this->pcs; }
	void setStock(int pcs) { this->pcs = pcs; }
};