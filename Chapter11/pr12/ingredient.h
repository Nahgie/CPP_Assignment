#pragma once
#include <string>
#include <iostream>

class ingredient {
private :
	std::string name;
public :
	ingredient(std::string name) { this->name = name; }


	virtual int getStock() = 0;
	virtual void setStock(int pcs) = 0;

	void getStockHis() { //각 재료들의 현황을 히스토그램으로 표현

		std::cout << this->getName() << "\t: ";

		for (int srch = 0; srch < this->getStock(); srch++) { std::cout << '*'; }

		std::cout << std::endl;
	}

	void minusStock(int pcs = 1) { //재료 사용시 갯수 차감

		if ((this->getStock() - pcs) < 0) { std::cout << this->getName() << "이(가) 부족합니다.\n" << std::endl; }

		else { this->setStock(this->getStock() - pcs); }
	}

	std::string getName() { return this->name; }
};