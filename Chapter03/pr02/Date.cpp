#include <iostream>
#include "Date.h"

Date::Date(int Y, int M, int D) {

	Year = Y;
	Month = M;
	Day = D;

}

Date::Date(std::string date_field) {
	
	Year = stoi(date_field.substr(0, date_field.find('/')));
	Month = stoi(date_field.substr(date_field.find('/') + 1, date_field.find('/')));
	Day= stoi(date_field.substr(date_field.rfind('/') + 1, date_field.find('\0')));

}

void Date::show() {

	std::cout << Year << "년" << Month << "월" << Day << "일" << std::endl;

}