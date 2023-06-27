#pragma once
#include "LoopAdder.h"

class ForLoopAdder : public LoopAdder {
private :

	int calculate() {
		
		int sum = 0;

		for (int cnt = this->getX(); cnt <= this->getY(); cnt++) { sum += cnt; }
		
		return sum;
	}

public :

	ForLoopAdder(std::string name)  : LoopAdder(name) {}

};