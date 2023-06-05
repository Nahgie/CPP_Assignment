#pragma once
#include <string>

class Date {
private:
	int Year = 0, Month = 0, Day = 0;
	std::string IDPD_Day;

public :

	Date() : Date(1990, 01, 01) {}
	Date(int Y, int M, int D);
	Date(std::string);

	inline int getYear() { return Year; }
	inline int getMonth() { return Month; }
	inline int getDay() { return Day; }

	void show();
};