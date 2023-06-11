#include <iostream>

int main() {

	int *NumArray = new int [5];
	
	std::cin >> NumArray[0] >> NumArray[1] >> NumArray[2] >> NumArray[3] >> NumArray[4];

	std::cout << "평균 " << ((double)NumArray[0] + (double)NumArray[1] + (double)NumArray[2] + (double)NumArray[3] + (double)NumArray[4]) / (double)5 << std::endl;

	delete[] NumArray;

	return 0;
}