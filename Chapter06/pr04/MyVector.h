#pragma once
class MyVector {
private :
	int* mem;
	int size;
public :
	MyVector(int n = 100, int val = 0) {
		this->mem = new int[n];
		this->size = n;
		for (int i = 0; i < size; i++) { mem[i] = val; }
	}
	~MyVector() { delete[] mem; }

	void status() {		for (int i = 0; i < this->size; i++) { std::cout << this->mem[i]; }		}
};