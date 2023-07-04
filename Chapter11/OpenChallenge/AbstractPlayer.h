#pragma once
#include <iostream>
#include <string>

class AbstractPlayer {
private :
	std::string name;
protected :
	static std::string gbb[3];
public:
	AbstractPlayer(std::string name) {
		
		this->name = name;
		gbb[0] = "가위", gbb[1] = "바위", gbb[2] = "보";

	}
	virtual std::string turn() = 0;
	std::string getName() { return this->name; }
};