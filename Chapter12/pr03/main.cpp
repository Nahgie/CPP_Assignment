﻿#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

int main() {

	std::string str;

	std::ifstream wFile("c:\\windows\\system.ini");

	if (!wFile) {

		std::cout << "파일을 읽을수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}

	while (std::getline(wFile, str)) {

		std::transform(str.begin(), str.end(), str.begin(), std::toupper);

		std::cout << str << std::endl;
	}

	wFile.close();
}