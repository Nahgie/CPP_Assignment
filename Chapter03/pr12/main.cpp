#include <iostream>
#include "Ram.h"

int main() { // 일부 데이터를 힙으로 옮기라는 주의문구가 표시되나 무시

	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);

	char res = ram.read(100) + ram.read(101);
	
	ram.write(102, res);

	std::cout << "102 번지의 값 = " << (int)ram.read(102) << std::endl;

	return 0;
}