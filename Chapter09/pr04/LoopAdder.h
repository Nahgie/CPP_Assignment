#pragma once
#include <iostream>

class LoopAdder {
private :

	std::string name;
	int x, y, sum;
	void read();
	void write();

protected :
	
	LoopAdder(std::string name = "") {
		this->name = name;
	}

	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;

public :
	
	void run();

};