#include <iostream>

template <typename T>
T* concat(T a[], int sizeA, T b[], int sizeB) {

	T* tmp_arr = new T[int(sizeA) + int(sizeB)];

	for (int i = 0; i < (sizeA + sizeB); i++) {

		if (i < sizeA) { tmp_arr[i] = a[i]; }

		else { tmp_arr[i] = b[i - sizeA]; }
	}
	return tmp_arr;
}

int main() {

	double a[] = { 1.1 , 2.2 , 3.3 };
	double b[] = { 4.4 , 5.5 , 6.6 , 7.7 , 8.8 , 9.9 };

	double *output_arr = concat(a, 3, b, 6);

	for (int i = 0; i < 9; i++) { std::cout << output_arr[i] << std::endl; }

	delete[] output_arr;
}