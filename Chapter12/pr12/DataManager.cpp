#include "DataManager.h"

void DataManager::load() { //파일 로딩

	std::string readLine;
	std::ifstream rFile("words.txt", std::ios::in);

	if (!rFile) {

		std::cout << "파일을 찾을수 없습니다.\n프로그램을 종료합니다." << std::endl;
		exit(1);
	}

	int index = 0;

	while (std::getline(rFile, readLine)) { //각 줄마다 저장된 단어를 vector에 삽입
		
		std::transform(readLine.begin(), readLine.end(), readLine.begin(), std::tolower); //섞여있는 대문자를 소문자로 바꿈
	
		words.push_back(readLine); 
		std::cout << "..\\" << words[index++] << std::endl;
	}
	
	system("cls"); //로딩후 콘솔 클리어
	rFile.close(); //파일 닫음
}

void DataManager::dataInvalidCheck(std::string read) { //데이터 무결성 검사

	if (read == "exit" || read == "Eixt" || read == "EXIT") { //exit 입력시 프로그램 종료
		
		std::cout << "\n\n프로그램을 종료합니다." << std::endl;
		exit(0); 
	
	} else if (!exist(read)) { //words.txt에 일치하는 단어가 없을 경우
		
		std::cout << "\n단어 없음\n" << std::endl; 
		return;
	}
		
	for (int length_srch = 0; length_srch < this->words.size(); length_srch++) { //vector에 저장된 요소수 만큼 루프	

		if (this->words[length_srch].length() == read.length()) { //vector의 저장된 각요소의 길이가 입력받은 요소와 동일한지 검사

			if (words[length_srch] == read) { continue; }// 같은 단어는 제외

			for (int srch = 0; srch < read.length(); srch++) { // 단어의 각 문자를 검사
				
				std::string origin = read; //입력받은 요소를 임시저장
				std::string comp = words[length_srch]; //비교를 위해 vector에 저장된 요소를 임시저장
				
				origin[srch] = comp[srch] = '\0'; //비교할 단어와 read의 문자열중 length_srch의 인덱스에 해당하는 문자에 공백문자를 넣음
			
				if (origin == comp) { std::cout << words[length_srch] << std::endl; } //공백 문자를 넣은 상태의 문자열이 동일하면 출력 (문자 하나만 다름)
			}
		}	
	}
}

bool DataManager::exist(std::string data) { //words.txt에 저장된 단어인지 검사

	for (int savedData_srch = 0; savedData_srch < this->words.size(); savedData_srch++) {
		if (this->words[savedData_srch] == data) { return true; } //저장된 단어라면 true반환
	}
	return false; //없는 단어라면 false반환
}

void DataManager::init() {

	load();
	std::cout << "...words.txt 파일 로딩 완료\n\n검색을 시작합니다. 단어를 입력해 주세요.\n" << std::endl;
	
	std::string userInput;

	while (true) {

		std::cout << "단어 >> ";
		std::cin >> userInput;

		dataInvalidCheck(userInput);
	}
}