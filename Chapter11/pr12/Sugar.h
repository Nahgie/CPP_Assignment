#pragma once
#include "ingredient.h"

class Sugar : public ingredient {
private :
	int pcs;
public:
	Sugar(std::string name = "Sugar", int pcs = 3) : ingredient(name) { this->pcs = pcs; }

	int getStock() { return this->pcs; }
	void setStock(int pcs) { this->pcs = pcs; }
};