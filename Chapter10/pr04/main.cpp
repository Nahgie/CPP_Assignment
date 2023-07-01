#include <iostream>

template<typename T>
bool search(T targetValue, T arr[], int index) {

	for (int i = 0; i < index; i++) {

		if (arr[i] == targetValue) { return true; }
	}
	return false;
}

int main() {

	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5)) {
		std::cout << "100이 배열 x에 포함되어 있다." << std::endl;

	} else {

		std::cout << "100이 배열 x에 포함되어 있지 않다." << std::endl;
	}
}