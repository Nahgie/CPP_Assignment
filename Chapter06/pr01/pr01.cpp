#include <iostream>

int add(int a[], int repeat = 1) {
	
	int sum = 0;
	
	for (int i = 0; i < repeat; i++) { sum += a[i]; }

	return sum;
}

int add(int a[], int b[] ,int repeat = 1) {
	
	int sum = 0;

	for (int i = 0; i < repeat; i++) {
		sum += a[i];
		sum += b[i];
	}

	return sum;
}

int main() {
	
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a,5);
	int d = add(a, b, 5);

	std::cout << c << "\n" << d << std::endl;
}