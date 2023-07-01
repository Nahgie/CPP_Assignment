#include <iostream>

template <class T> 
bool equalArrays(T x[], T y[], int index) {

	int matched = 0;

	for (int i = 0; i < index; i++) {
		if (x[i] == y[i]) {
			matched++;
		}
	}

	if (matched == index) { return true; }
	else { return false; }
}


int main() {

	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };

	if (equalArrays(x, y, 5)) { std::cout << "같다" << std::endl; } 
	else { std::cout << "다르다" << std::endl; }
}