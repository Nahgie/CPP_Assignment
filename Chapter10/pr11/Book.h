#pragma once
#include <vector>
#include <iostream>
#include <string>

class Book {
private :

	std::vector<std::string> Years, Title, Author;

public :
	
	//Setter
	void setData(std::string year, std::string title, std::string author) {
		
		this->Years.push_back(year);
		this->Title.push_back(title);
		this->Author.push_back(author);
	}

	//Getter
	std::string getYears(int index) { return this->Years.at(index); }
	std::string getTitle(int index) { return this->Title.at(index); }
	std::string getAuthor(int index) { return this->Author.at(index); }
	int getSavedCount() { return this->Author.size(); }
};