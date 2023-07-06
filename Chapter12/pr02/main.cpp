#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::string str;
	int lineCount = 0;

	std::ifstream wFile("c:\\windows\\system.ini");

	if (!wFile) {

		std::cout << "파일을 읽을수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}

	while (std::getline(wFile, str)) {

		lineCount++;

		std::cout << lineCount << " : " << str << std::endl;
	}

	wFile.close();
}