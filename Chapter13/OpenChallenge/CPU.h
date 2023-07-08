#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "HardwareException.h"

class CPU {
private :
	HardwareException exc;

	std::string instruction,cmd;
	int op1 = NULL, op2 = NULL;

	void fetch() throw(HardwareException);
	void decode() throw(HardwareException);
	void excute() throw(HardwareException);

	void bufClear();
public :

	void init();
};