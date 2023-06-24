#pragma once
#include "Book.h"

class ConversationBook : public Book{
private :

	std::string language; //언어

public :
	
	ConversationBook();
	ConversationBook(int id, int price, std::string desc, std::string pd, std::string title, std::string author, std::string isbn ,std::string lang);

	//Getter
	std::string getLang() { return this->language; }

	//Functions
	void show();
};