#pragma once
#include <iostream>

class Product {
private :

	int product_id , product_price; //제품명 , 제품값(가격)
	std::string product_description; //제품설명
	std::string producer; //생산자

public :

	Product();
	Product(int id, int price, std::string desc, std::string pd);

	//Getter
	int getID() { return product_id; }
	int getPRICE() { return product_price; }
	std::string getDESC() { return product_description; }
	std::string getPD() { return producer; }

	//Function
	virtual void show() = 0;
};