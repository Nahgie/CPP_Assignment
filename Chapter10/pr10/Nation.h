#pragma once
#include <string>

class Nation{
private :

	 std::string countryName, capitalName;

public :

	Nation(std::string Country, std::string Capital) {
		this->countryName = Country;
		this->capitalName = Capital;
	}

	//Getter
	std::string getCountry() { return this->countryName; }
	std::string getCapital() { return this->capitalName; }
};