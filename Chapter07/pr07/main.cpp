#include "Matrix.h"

Matrix& operator >> (Matrix& base, int arr[]) {

	for (int c_index = 0; c_index < 4; c_index++) { arr[c_index] = base.m_arr[c_index]; }

	return base;
}

Matrix& operator << (Matrix& base, int arr[]) {

	for (int c_index = 0; c_index < 4; c_index++) { base.m_arr[c_index] = arr[c_index]; }

	return base;
}

int main() {

	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) { std::cout << x[i] << " "; }
	std::cout << std::endl;

	b.show();
}