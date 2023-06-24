#include "ProductManager.h"

int ProductManager::setID = 0;

void ProductManager::fullScans() {
	
	for (int scan_idx = 0; scan_idx < this->setID; scan_idx++) { goods[scan_idx]->show(); }
}

void ProductManager::addGoods() {
	
	//입력받을때 사용할 임시변수들
	int SEL_type = 0, setPrice;
	std::string setDESC, setPD, setTitle, setAuthor, setISBN , setAlbumTitle , setArtist , setLanguage;

	std::cout << "상품 종류 : 책(1) , 음악CD(2) , 회화책(3) ?";
	std::cin >> SEL_type;	std::cin.ignore(true); //엔터 중복입력 방지

	switch (SEL_type) {

	case 1: { //책

		std::cout << "상품설명 >> ";		std::getline(std::cin, setDESC);
		std::cout << "생산자   >> ";		std::getline(std::cin, setPD);
		std::cout << "가격     >> ";		std::cin >> setPrice;	std::cin.ignore(true); //엔터 중복입력 방지
		std::cout << "책제목   >> ";		std::getline(std::cin, setTitle);
		std::cout << "저자     >> ";		std::getline(std::cin, setAuthor);
		std::cout << "ISBN     >> ";		std::getline(std::cin, setISBN);

		Book* tmp_book = new Book(this->setID, setPrice, setDESC, setPD, setTitle, setAuthor, setISBN);
		goods[this->setID] = tmp_book;
		break;
	}
	case 2: { //CD

		std::cout << "상품설명 >> ";		std::getline(std::cin, setDESC);
		std::cout << "생산자   >> ";		std::getline(std::cin, setPD);
		std::cout << "가격     >> ";		std::cin >> setPrice;	std::cin.ignore(true); //엔터 중복입력 방지
		std::cout << "앨범제목 >> ";		std::getline(std::cin, setAlbumTitle);
		std::cout << "가수     >> ";		std::getline(std::cin, setArtist);

		CompactDisk* tmp_cd = new CompactDisk(this->setID, setPrice, setDESC, setPD, setAlbumTitle, setArtist);
		goods[this->setID] = tmp_cd;
		break;
	}
	case 3: { //회화책

		std::cout << "상품설명 >> ";		std::getline(std::cin, setDESC);
		std::cout << "생산자   >> ";		std::getline(std::cin, setPD);
		std::cout << "가격     >> ";		std::cin >> setPrice;	std::cin.ignore(true); //엔터 중복입력 방지
		std::cout << "책제목   >> ";		std::getline(std::cin, setTitle);
		std::cout << "저자     >> ";		std::getline(std::cin, setAuthor);
		std::cout << "언어     >> ";		std::getline(std::cin, setLanguage);
		std::cout << "ISBN     >> ";		std::getline(std::cin, setISBN);

		ConversationBook* tmp_cbook = new ConversationBook(this->setID, setPrice, setDESC, setPD, setTitle, setAuthor, setISBN, setLanguage);
		goods[this->setID] = tmp_cbook;
		break;
	}
	default: { //예외처리
		std::cout << "\n\n허용되지 않는 조작입니다.\n" << std::endl;
		break;
	}}
	this->setID++; // ID값 추가
}


void ProductManager::init() {
	
	int SEL_mode = 0;
	
	std::cout << "***** 상품 관리 프로그램을 작동합니다. *****" << std::endl;

	while (SEL_mode != 3) {

		std::cout << "상품 추가(1) , 모든 상품 조회(2) , 끝내기(3) ?";
		std::cin >> SEL_mode;

		switch (SEL_mode) {

		case 1: {//상품 추가
			addGoods();
			break;
		}
		case 2: {//모든 상품 조회
			fullScans();
			break;
		}
		case 3: {break;} //종료

		default: { //예외처리
			std::cout << "\n\n허용되지 않는 조작입니다.\n\n" << std::endl;
			break;
		}}
	}
}