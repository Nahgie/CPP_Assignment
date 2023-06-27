#pragma once
#include "LoopAdder.h"

class WhileLoopAdder : public LoopAdder {
private :

	int calculate() {
		
		int sum = 0 , wla_cnt = this->getX();

		while (wla_cnt <= this->getY()) {
			
			sum += wla_cnt;
			wla_cnt++;
		
		}

		return sum;
	}

public :

	WhileLoopAdder(std::string name)  : LoopAdder(name) {}

};