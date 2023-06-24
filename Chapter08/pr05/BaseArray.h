#pragma once
class BaseArray {
private :
	
	int capacity;
	int* mem;

protected :
	
	BaseArray(int capacity = 100) { this->capacity = capacity, this->mem = new int[capacity]; }

	~BaseArray() { delete[] this->mem; }

	void put(int index , int val) { this->mem[index] = val; }
	int get(int index) { return this->mem[index]; }
	int getCapacity() { return this->capacity; }
};