#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::string tempStr;

	std::ifstream mytextFile("c:\\temp\\test.txt"); //("test.txt");

	if (!mytextFile) {

		std::cout << "ERROR : 파일에 접근할 수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}

	while (std::getline(mytextFile, tempStr)) {

		std::cout << tempStr << std::endl;
	}

	mytextFile.close();
}