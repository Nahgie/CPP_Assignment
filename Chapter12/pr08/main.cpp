#include <iostream>
#include <fstream>
#include <iomanip>

void showHex(char buf_arr[] , int index) {
	
	for (int cvrt_hex = 0; cvrt_hex < 16; cvrt_hex++) {

		if (index <= cvrt_hex) { std::cout << "    "; } //마지막줄 정렬

		else { std::cout  << std::hex << std::setw(2) << std::setfill('0') << int(buf_arr[cvrt_hex]) << ' '; }

		if (cvrt_hex == 7) { std::cout << "\t"; } //8바이트당 탭
	}
	std::cout << "\t"; //16바이트 만큼 출력이 끝나면 탭
}

void showChar(char buf_arr[] , int index) {

	for (int cvrt_char = 0; cvrt_char < 16; cvrt_char++) {

		if (index <= cvrt_char) { std::cout << "    "; } //마지막줄 정렬

		else { std::cout <<std::dec << std::setw(2) << std::setfill(' ') << (isprint(buf_arr[cvrt_char]) ? buf_arr[cvrt_char] : '.'); }
		
		if (cvrt_char == 7) { std::cout << "\t"; } //8바이트당 탭
	}
	std::cout << std::endl; //16바이트 만큼 출력이 끝나면 개행
}

int main() {

	std::ifstream wFile("c:\\windows\\system.ini", std::ios::in | std::ios::binary);

	if (!wFile) { return 0; } //파일로딩 실패시 프로그램 종료

	std::cout << "c:\\windows\\system.ini 출력\n" << std::endl;

	char buf[16];

	while (true) {

		wFile.read(buf, 16); //16바이트 만큼 데이터를 불러옴
		int byteSize = wFile.gcount(); //사용한 바이트를 정수로 반환
		showHex(buf,byteSize); //16진수로 표기
		showChar(buf,byteSize); //문자로 표기

		if (byteSize < 16) { break; } //사용한 바이트가 16바이트 보다 적으면 마지막 라인으로 간주하고 루프탈출
	}
	wFile.close();
}