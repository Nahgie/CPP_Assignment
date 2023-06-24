#include "CompactDisk.h"

CompactDisk::CompactDisk() : CompactDisk(0, 0, "N", "O", "N", "E") {}

CompactDisk::CompactDisk(int id, int price, std::string desc, std::string pd, std::string title, std::string artist) : Product(id , price , desc , pd) {
	
	this->album_title = title;
	this->artist = artist;
}

void CompactDisk::show() {

	std::cout << "\n--- 상품ID : " << this->getID() << std::endl;
	std::cout << "상품설명     : " << this->getDESC() << std::endl;
	std::cout << "생산자       : " << this->getPD() << std::endl;
	std::cout << "가격         : " << this->getPRICE() << std::endl;
	std::cout << "앨범제목     : " << this->album_title << std::endl;
	std::cout << "가수         : " << this->artist << '\n' << std::endl;
}