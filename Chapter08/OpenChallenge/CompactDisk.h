#pragma once
#include "Product.h"

class CompactDisk : public Product{
private :

	std::string album_title; // 앨범제목
	std::string artist; //가수

public :

	CompactDisk();
	CompactDisk(int id, int price, std::string desc, std::string pd, std::string title, std::string artist);

	//Getter
	std::string getAlbumTitle() { return album_title; }
	std::string getArtist() { return artist; }

	//Function
	void show();
};