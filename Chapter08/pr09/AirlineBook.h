#pragma once
#include "Schedule.h"

class AirlineBook {
private :
	Schedule SCD[3]{ {"07"}, {"12"}, {"17"} }; //시간지정

	void reservation(); //예약
	void cancel(); //취소
	void r_show(); //예약현황
public :
	void init(); //예약 프로그램 시작
};