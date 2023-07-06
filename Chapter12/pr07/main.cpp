#include <iostream>
#include <fstream>

int main() {

	std::ifstream wFile("c:\\windows\\system.ini",std::ios::in | std::ios::binary);
	std::ofstream pFile("c:\\temp\\system.txt",std::ios::out | std::ios::binary);

	if (!wFile || !pFile) {
		
		std::cout << "파일을 읽을수 없습니다.\n\n프로그램을 종료합니다." << std::endl;
		return 0;
	}

	wFile.seekg(0,std::ios::end);
	long long size = wFile.tellg();

	long long count = 0 , ch = 0;
	
	while (count < size) {
		
		count++;

		wFile.seekg(size - count, std::ios::beg); //파일 시작점을 기준으로 포인터를 (파일크기 - 루프횟수)만큼 움직인다.
		ch = wFile.get();
		pFile.put(ch);
	}
	wFile.close();
	pFile.close();
}