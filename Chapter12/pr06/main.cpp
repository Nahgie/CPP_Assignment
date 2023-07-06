#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ifstream wFile("c:\\windows\\system.ini",std::ios::in | std::ios::binary); //바이너리로 지정하지 않으면 마지막 복사가 17B가 나오므로 예시랑 다른 결과가 나옴(결과물 복사는 정상)

	if (!wFile) {

		std::cout << "c:\\windows\\system.ini 파일을 찾을수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}
	
	std::ofstream pFile("c:\\temp\\system.txt",std::ios::out | std::ios::binary);

	if (!pFile) {

		std::cout << "c:\\temp\\system.txt 파일을 찾을수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}

	char str[1024]; // 1KB 용량의 버퍼

	wFile.seekg(0, std::ios::end); //파일 크기를 구하기 위해 파일 포인터를 파일 끝부분으로 지정
	int wByte = wFile.tellg(); //파일 포인터의 위치를 int형으로 저장
	int wBytePercentage = wByte / 10; // 파일크기의 10%를 구함

	wFile.seekg(0, std::ios::beg);//파일 크기를 구하기 위해 끝부분으로 지정했던 파일 포인터를 시작부분으로 재지정

	std::cout << "복사 시작..." << std::endl;

	int Times = 0;
	
	while (Times <= 10) { 

		Times++;

		wFile.read(str, wBytePercentage); //10% 값 만큼 읽어 str배열에 저장
		int readIndex = wFile.gcount(); //방금 읽었던 바이트의 용량을 저장

		pFile.write(str,readIndex); //str배열의 readIndex만큼의 문자를 system.txt파일에 저장

		if (Times <= 10) {
		
			std::cout << '.' << readIndex << "B " << (Times) * 10 << '%' << std::endl; //마지막 9Byte 문자열은 %표시 제외
		}
	}

	std::cout << '\n' << wByte << "B 복사를 완료했습니다." << std::endl;

	wFile.close();
	pFile.close();
}