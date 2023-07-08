#include <iostream>
#include <fstream>

int getFileSize(const char* file) {

	if (file == NULL) { throw "파일명이 NULL 입니다."; } //file이 NULL 포인터면 -1 리턴

	std::ifstream fin(file);
	if (!fin) { throw "파일로딩을 실패했습니다."; } //file을 열수없다면 -2 리턴
	
	fin.seekg(0, std::ios::end);

	int length = fin.tellg();
	
	return length;
}

int main() {

	try {
		int n = getFileSize("c:\\windows\\system.ini");
		std::cout << "파일 크기 = " << n << std::endl;

		int m = getFileSize(NULL);
		std::cout << "파일 크기 = " << m << std::endl;
	
	} catch (const char* errMessage) {

		std::cout << "예외 발생 : " << errMessage << std::endl;
	}
}