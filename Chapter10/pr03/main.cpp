#include <iostream>

template <class T>
void reverseArray(T x[], int index) {

	T *temp = new T[index];

	for (int i = 0; i < index; i++) { temp[i] = x[i]; }

	for (int j = 0; j < index; j++) { x[j] = temp[(index - 1) - j]; }

	delete[] temp;
}

int main() {

	int x[] = { 1,10,100,5,4 };
	reverseArray(x,5);

	for (int i = 0; i < 5; i++) { std::cout << x[i] << std::endl; }
}