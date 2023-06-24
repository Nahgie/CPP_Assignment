#include "Product.h"

Product::Product() : Product(0,0,"EMPTY","UNKNOWN") {}

Product::Product(int id, int price, std::string desc, std::string pd) {

	this->product_id = id;
	this->product_price = price;
	this->product_description = desc;
	this->producer = pd;
}