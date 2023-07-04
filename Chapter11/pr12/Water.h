#pragma once
#include "ingredient.h"

class Water : public ingredient {
private :
	int pcs;
public:
	Water(std::string name = "Water", int pcs = 3) : ingredient(name) { this->pcs = pcs; }

	int getStock() { return this->pcs; }
	void setStock(int pcs) { this->pcs = pcs; }
};