#pragma once
#include "LoopAdder.h"

class DoWhileLoopAdder : public LoopAdder {
private :

	int calculate() {

		int sum = 0, wla_cnt = this->getX();

		do {

			sum += wla_cnt;
			wla_cnt++;

		} while (wla_cnt <= this->getY());

		return sum;
	}

public :

	DoWhileLoopAdder(std::string name) : LoopAdder(name) { }
};
