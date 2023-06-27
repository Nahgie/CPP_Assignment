#pragma once
#include <string>
#include <iostream>

class Printer {
protected :
	
	std::string model, manufacturer; // 모델명 , 제조사
	int printedCount, availableCount; // 인쇄 매수 , 종이 잔량
	
public :

	Printer(std::string model, std::string manufacturer, int papers) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->availableCount = papers;
		this->printedCount = 0;
	}

	virtual void print(int pages) = 0;
	virtual void show() = 0;
};