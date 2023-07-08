#include <iostream>
#include <fstream>

void fileCopy(const char* srcDir , const char* copyDir) {

	std::ifstream fsrc(srcDir, std::ios::in | std::ios::binary);
	if (!fsrc) { throw srcDir; }

	std::ofstream fdest(copyDir, std::ios::out | std::ios::binary);
	if (!fdest) { throw copyDir; }
	
	int c;
	while ((c = fsrc.get()) != EOF) { fdest.put(c); }

	std::cout << "파일 복사 완료" << std::endl;

	fsrc.close();
	fdest.close();
}

int main() {

	try {

		fileCopy("01.webp" , "01_copy.webp");
	
	} catch (const char* err) {

		std::cout << err << "에 접근할수 없습니다." << std::endl;
		return 0;
	}
}