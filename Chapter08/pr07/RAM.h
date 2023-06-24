#pragma once
#include "BaseMemory.h"

class RAM : private BaseMemory {
public :
	RAM(int RAM_size) : BaseMemory(RAM_size){}

	void write(int index, char data) { this->setMem(data, index); }
	char read(int index) { return this->getMem(index); }
};