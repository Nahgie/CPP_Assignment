#include <iostream>

template<class T> 
T biggest(T x[] , int index) {
	
	T temp = 0;

	for (int i = 0; i < index; i++) {
	
		if (temp < x[i]) { temp = x[i]; }
	}

	return temp;
}

int main() {

	int x[] = { 1,10,100,5,4 };
	std::cout << biggest(x, 5) << std::endl;
}