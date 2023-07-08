#include <iostream>

int* concat(int a[], int sizeA, int b[], int sizeB) {
	
	int length = int(sizeA) + int(sizeB);

	if (sizeA <= 0 || sizeB <= 0) { throw -1; } //0을 포함한 음수를 입력받으면 -1

	int* tmpArr = new int[length];

	for (int copy_idx = 0; copy_idx < length; copy_idx++) {

		if (copy_idx < sizeA) { 
			
			tmpArr[copy_idx] = a[copy_idx]; 
		
		} else {
			
			tmpArr[copy_idx] = b[copy_idx - sizeA]; 
		}
	}
	return tmpArr;
}

int main() {

	int x[] = { 1,2,3,4,5 };
	int y[] = { 10,20,30,40 };

	try {
		int* p = concat(x, 5, y, 4);

		for (int n = 0; n < 9; n++) {

			std::cout << p[n] << ' ';
		}
		std::cout << std::endl;

		delete[] p;
	
	} catch (int failcode) {

		std::cout << "오류 코드 : " << failcode << std::endl;
	}
}