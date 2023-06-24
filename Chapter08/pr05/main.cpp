#include <iostream>
#include "MyQueue.h"

int main() {

	MyQueue mQ(100);
	int n;

	std::cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	
	for (int i = 0; i < 5; i++) {
		std::cin >> n;
		mQ.enqueue(n);
	}
	
	std::cout << "큐의 용량 : " << mQ.capacity() << ",큐의 크기 : " << mQ.length() << std::endl;
	std::cout << "큐의 원소를 순서대로 제거하여 출력한다.>> ";
	
	while (mQ.length() != 0) {
		std::cout << mQ.dequeue() << " ";
	}

	std::cout << std::endl << "큐의 현재 크기 : " << mQ.length() << std::endl;
}