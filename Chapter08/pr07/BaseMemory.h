#pragma once
class BaseMemory {
private :
	char* mem;
protected :
	BaseMemory(int size) { mem = new char[size]; }
	~BaseMemory() { delete[] mem; }

	char getMem(int index) { return this->mem[index]; }
	void setMem(char data, int index) { this->mem[index] = data; }
};