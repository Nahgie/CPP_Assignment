#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {

	std::vector <std::string> iniDatas;
	std::string getLine;
	int userMode = 0;

	std::ifstream wFile("c:\\windows\\system.ini",std::ios::in | std::ios::binary);

	if (!wFile) { return 0; } // 파일을 못불러오면 프로그램 종료

	while (std::getline(wFile, getLine)) { iniDatas.push_back(getLine); } //파일을 한 라인씩 로드
	
	std::cout << "c:\\windows\\system.ini 파일 읽기 완료\n라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료\n" << std::endl;
	
	while (true) {

		std::cout << ": ";
		std::cin >> userMode;

		if (userMode <= 0) { // 1아래로 입력시 종료

			std::cout << "\n종료합니다.\n" << std::endl;
			break;
		}

		else if (iniDatas.size() < userMode) { std::cout << "\n불러올수있는 라인을 넘어섰습니다.\n" << std::endl; } 
		
		else { std::cout << "; " << iniDatas.at(userMode - 1) << std::endl; }
	}
	wFile.close();
}