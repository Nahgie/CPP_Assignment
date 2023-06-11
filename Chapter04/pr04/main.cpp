#include <iostream>
#include "Sample.h"

int main() {

	Sample s(10);
	s.read();
	s.write();
	
	std::cout << "가장 큰 수는 " << s.big() << std::endl;

	return 0;
}