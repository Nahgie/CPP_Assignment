#pragma once
#include <string>

class Book {
private :

	std::string Years, Title, Author;

public :
	
	Book(std::string year, std::string title, std::string author) {
		
		this->Years = year;
		this->Title = title;
		this->Author = author;
	}

	//Getter
	std::string getYears() { return this->Years; }
	std::string getTitle() { return this->Title; }
	std::string getAuthor() { return this->Author; }
};