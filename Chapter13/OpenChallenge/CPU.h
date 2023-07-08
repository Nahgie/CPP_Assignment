#pragma once
#include <iostream>
#include <sstream>
#include "HardwareException.h"
#define GARBAGE -2147483648 //int형 음수의 최댓값

class CPU {
private :
	HardwareException exc;

	std::string instruction,cmd;
	int op1 = GARBAGE , op2 = GARBAGE;

	void fetch() throw(HardwareException);
	void decode() throw(HardwareException);
	void excute() throw(HardwareException);

	void bufClear();

public :

	void init();
};