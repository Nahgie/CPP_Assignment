#include <iostream>

template <typename T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	
	int totalSize = 0, copySize = 0; // 요소의 갯수 , 요소를 저장할 인덱스 값

	T* arr = new T[int(sizeSrc) + int(sizeMinus)]; //src와 minus를 통합하기 위해 두 배열의 인덱스값 만큼의 크기를 가진 동적메모리 할당

	for (int in_idx = 0; in_idx < (sizeSrc + sizeMinus); in_idx++) { // src와 minus배열 통합
		
		if (in_idx < sizeSrc) { 
			
			arr[in_idx] = src[in_idx]; 
		
		} else { 
		
			arr[in_idx] = minus[in_idx - sizeSrc]; 
		}
	}

	for (int del_idx = 0; del_idx < sizeSrc; del_idx++) { //src의 인덱스 만큼 minus와 중복되는 요소 검출
		
		for (int find_idx = 0; find_idx < sizeMinus; find_idx++) {
			
			if (arr[del_idx] == minus[find_idx]) { 
				
				arr[del_idx] = NULL; 
				totalSize--;
			}
		}
		totalSize++;
	}

	for (int del_idx = sizeSrc; del_idx < (sizeSrc + sizeMinus); del_idx++) { //minus의 인덱스 만큼 src와 중복되는 요소 검출
		
		for (int find_idx = 0; find_idx < sizeSrc; find_idx++) {
		
			if (arr[del_idx] == src[find_idx]) { 

				arr[del_idx] = NULL; 
				totalSize--;
			}
		}
		totalSize++;
	}

	retSize = totalSize; //배열 사이즈 반환

	T* retArr = new T[totalSize]; //중복되지 않는 요소 반환을 위한 동적메모리 생성

	for (int copy_idx = 0; copy_idx < (sizeSrc + sizeMinus); copy_idx++) { // retArr에 중복되지 않는 요소 대입
	
		if (!(arr[copy_idx] == NULL)) { 
			
			retArr[copySize++] = arr[copy_idx]; 
		}
	}
	
	delete[] arr; //요소 비교를 위해 생성된 arr 메모리 해제

	return retArr;
}

int main() {

	int a[] = { 1,2,3,4,5,6 };
	int b[] = { 4,7,6,8,9,1,2 };
	int arr_size = 0;

	int* arr = remove(a, 6, b, 7,arr_size);
	
	for (int i = 0; i < arr_size; i++) { std::cout << arr[i] << std::endl; }
	
	delete[] arr;
}