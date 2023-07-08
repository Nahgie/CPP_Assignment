#include <iostream>

int* copy(int* src, int size) throw(int) {

	int* p = nullptr;
	
	if (size < 0) { throw -1; } //too small

	else if(size > 100 ){ throw -2; } //too big

	p = new int[size]; //동적 메모리 할당

	if (p == nullptr) { throw -3; } //memory short
	
	else if (src == nullptr) { //NULL source

		throw -4;
		delete[] p;
	
	} else { //normally arr copy

		for (int n = 0; n < size; n++) { p[n] = src[n]; }
		return p;
	}
}

int main() {

	int x[] = { 1,2,3 };

	try {

		int* p = copy(x, 3);
		
		for (int i = 0; i < 3; i++) { std::cout << p[i] << ' '; }
		std::cout << std::endl;
		
		delete[] p;

	} catch (int errCode) {

		switch (errCode) {

		case -1:

			std::cout << "too small" << std::endl;
			break;

		case -2:
			
			std::cout << "too big" << std::endl;
			break;

		case -3:
			
			std::cout << "memory short" << std::endl;
			break;

		case -4:

			std::cout << "NULL source" << std::endl;
			break;
		
		default :

			return 0;
			break;
		}
	}
}