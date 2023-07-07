#include "FileCompare.h"

bool FileCompare::compare() {

	std::ifstream srcFile(this->srcDirectory,std::ios::in | std::ios::binary);
	std::ifstream compareFile(this->compareDirectory,std::ios::in | std::ios::binary);

	if (!srcFile || !compareFile) {

		std::cout << "\n\n파일 경로가 올바르지 않거나 파일을 열수없습니다.\n프로그램을 종료합니다." << std::endl;
		exit(1);
	}

	char srcByte, compareByte; //1바이트씩 비교하기 위해 char형 사용 (int나 long long 사용도 가능하지만 잉여메모리가 많아짐)
	
	while ((srcByte = srcFile.get()) != EOF) {

		compareByte = compareFile.get();
		
		if (srcByte != compareByte) { 
			
			std::cout << "\n\n두 파일은 같은 파일이 아닙니다." << std::endl;
			exit(1);
		}
	}
	std::cout << "\n\n두 파일은 같은 파일입니다." << std::endl;

	srcFile.close();
	compareFile.close();

	return false;
}

void FileCompare::init() {

	bool breakPoint = true;

	while (breakPoint) { //프로젝트 폴더에 있는 webp 파일로 비교함
	
		std::cout << "소스 파일의 경로를 입력하세요.\nroot?> ";
		std::cin >> this->srcDirectory;

		std::cout << "\n소스와 비교할 파일의 경로를 입력하세요.\nroot?> ";
		std::cin >> this->compareDirectory;

		breakPoint = compare();
	}
}