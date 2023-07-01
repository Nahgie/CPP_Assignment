#pragma once
#include <vector>
#include <iostream>

class Nation{
private :

	 std::vector<std::string> countryName, capitalName;

public :

	//Setter
	void setData(std::string Country , std::string Capital) {
		this->countryName.push_back(Country);
		this->capitalName.push_back(Capital);
	}
	void delData(int index) {
		this->countryName.erase(countryName.begin() + index);
		this->capitalName.erase(capitalName.begin() + index);
	}

	//Getter
	std::string getCountry(int index) { return this->countryName.at(index); }
	std::string getCapital(int index) { return this->capitalName.at(index); }
	int getSavedCount() { return this->countryName.size(); }
};