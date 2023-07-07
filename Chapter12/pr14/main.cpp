#include <iostream>
#include <fstream>

int main() {

	std::ifstream wFile("c:\\windows\\system.ini", std::ios::in | std::ios::binary);

	if (!wFile) { return 0; } //파일에 접근하지 못하면 프로그램 종료

	int count = 0; //읽어온 바이트를 저장
	char *buf = new char; //1바이트씩 읽어오기 위해 동적메모리 할당 [*.write()가 (char *) 타입만 지원하는것 같음]

	while (!wFile.eof()) {

		wFile.read(buf,1); //1바이트씩 읽어오기
		int n = wFile.gcount(); //읽어온 바이트를 정수로 반환
		count += n; //1바이트를 읽어올때 마다 1씩 저장
	}
	std::cout << count << "B" << std::endl;

	delete buf;//동적 메모리 해제
	wFile.close();
}