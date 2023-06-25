#pragma once
#include <iostream>
#include "Seat.h"

class Schedule {
private :
	
	std::string resTime;
	Seat Passenger[8];

public :

	Schedule(std::string resTime, std::string name = "---", int index = 0) {

		this->resTime = resTime;
		Passenger[index].setName(name);
	}

	std::string getResTime() { //출발시간
		
		return this->resTime; 
	}
	
	void setPSG(std::string name, int index) { //승객 저장
		
		Passenger[index].setName(name); 
	}

	std::string getPSG(int index) { //승객 찾기

		return Passenger[index].getName();
	}

	void show() { //좌석현황
	
		std::cout << this->resTime << "시 :\t";
		
		for (int srch_idx = 0; srch_idx < 8; srch_idx++) {
		
			std::cout << Passenger[srch_idx].getName() << "\t";
		
		}
		std::cout << std::endl;
	}
};