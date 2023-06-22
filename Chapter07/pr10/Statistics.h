#pragma once
#include <iostream>

class Statistics {
private : 
	int *arr_p, index;
public:

	Statistics(int size = 0) {
		this->arr_p = new int[size];
		this->index = size;
	}

	Statistics(Statistics& stsc) {
		
		for (int dc_index = 0; dc_index < this->index; dc_index++) { this->arr_p[dc_index] = stsc.arr_p[dc_index]; }
		this->index = stsc.index;
	}

	~Statistics() { delete[] arr_p; }

	Statistics& operator << (int num);
	int operator >>(int& num);
	bool operator !();
	void operator ~();
};