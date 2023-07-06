#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::string str;
	std::ifstream mySource("target.cpp");

	if (!mySource) {

		std::cout << "파일을 찾을수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}

	while (std::getline(mySource,str)) {
		
		for (int index = str.find("//"); index < str.size(); index++) { str.erase(index); } // 주석 시작인덱스와 문자열의 끝의 인덱스를 구해 문자를 삭제함

		std::cout << str << std::endl;
	}
	mySource.close();
}