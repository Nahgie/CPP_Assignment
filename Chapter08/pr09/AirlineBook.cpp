#include "AirlineBook.h"

void AirlineBook::reservation() { //예약

	int SEL_Time = 0, Seat_idx = 0;
	std::string Seat_name;

	std::cout << SCD[0].getResTime() << "시 : ( 1 ) , " << SCD[1].getResTime() << "시 : ( 2 ) , " << SCD[2].getResTime() << "시 : ( 3 ) >>";
	std::cin >> SEL_Time;

	switch (SEL_Time) {
	
	case 1:{ // 07시 예약

		SCD[0].show();

		std::cout << "좌석 번호 >>";
		std::cin >> Seat_idx;
		std::cout << "이름 입력 >>";
		std::cin >> Seat_name;
		
		if (SCD[0].getPSG(Seat_idx - 1) == "---") {
			
			SCD[0].setPSG(Seat_name, Seat_idx - 1);
			std::cout << std::endl;
		
		} else {

			std::cout << "\n이미 예약된 자리입니다.\n" << std::endl;
		}
		break;
	
	} case 2:{ // 12시 예약

		SCD[1].show();

		std::cout << "좌석 번호 >>";
		std::cin >> Seat_idx;
		std::cout << "이름 입력 >>";
		std::cin >> Seat_name;

		if (SCD[1].getPSG(Seat_idx - 1) == "---") {

			SCD[1].setPSG(Seat_name, Seat_idx - 1);
			std::cout << std::endl;

		} else {

			std::cout << "\n이미 예약된 자리입니다.\n" << std::endl;

		}
		break;

	} case 3: { //17시 예약

		SCD[2].show();

		std::cout << "좌석 번호 >>";
		std::cin >> Seat_idx;
		std::cout << "이름 입력 >>";
		std::cin >> Seat_name;

		if (SCD[2].getPSG(Seat_idx - 1) == "---") {

			SCD[2].setPSG(Seat_name, Seat_idx - 1);
			std::cout << std::endl;

		} else {

			std::cout << "\n이미 예약된 자리입니다.\n" << std::endl;
		}
		break;

	} default: {

		std::cout << "허용되는 시간이 아닙니다." << std::endl;
		break; 
	}}
}

void AirlineBook::cancel() {

	int CancelTime = 0, Cancel_idx = 0;
	std::string Cancel_name;

	std::cout << SCD[0].getResTime() << "시 : ( 1 ) , " << SCD[1].getResTime() << "시 : ( 2 ) , " << SCD[2].getResTime() << "시 : ( 3 ) >>";
	std::cin >> CancelTime;

	switch (CancelTime) {

	case 1: { // 07시 취소

		SCD[0].show();

		std::cout << "좌석 번호 >> ";
		std::cin >> Cancel_idx;
		std::cout << "이름 입력 >> ";
		std::cin >> Cancel_name;

		if (SCD[0].getPSG(Cancel_idx - 1) == Cancel_name) {

			SCD[0].setPSG("---", Cancel_idx - 1);
			std::cout << std::endl;

		} else {

			std::cout << "\n이미 예약된 자리입니다.\n" << std::endl;
		}
		break;

	} case 2: { // 12시 취소

		SCD[1].show();

		std::cout << "좌석 번호 >> ";
		std::cin >> Cancel_idx;
		std::cout << "이름 입력 >> ";
		std::cin >> Cancel_name;

		if (SCD[1].getPSG(Cancel_idx - 1) == Cancel_name) {

			SCD[1].setPSG("---", Cancel_idx - 1);
			std::cout << std::endl;

		} else {

			std::cout << "\n이미 예약된 자리입니다.\n" << std::endl;
		}
		break;

	} case 3: { //17시 취소

		SCD[2].show();

		std::cout << "좌석 번호 >> ";
		std::cin >> Cancel_idx;
		std::cout << "이름 입력 >> ";
		std::cin >> Cancel_name;

		if (SCD[2].getPSG(Cancel_idx - 1) == Cancel_name) {

			SCD[2].setPSG("---", Cancel_idx - 1);
			std::cout << std::endl;

		} else {

			std::cout << "\n이미 예약된 자리입니다.\n" << std::endl;
		}
		break;

	} default: {

		std::cout << "허용되는 시간이 아닙니다." << std::endl;
		break;
	}}
}

void AirlineBook::r_show() { //예약현황

	for (int show_idx = 0; show_idx < 3; show_idx++) { 
		
		SCD[show_idx].show(); 
	}
	std::cout << std::endl;
}

void AirlineBook::init() {

	int SEL_mode = 0;

	std::cout << "***** 한성항공에 오신것을 환영합니다 *****\n" << std::endl;

	while (SEL_mode != 4) {

		std::cout << "예약 : ( 1 ) , 취소 : ( 2 ) , 보기 : ( 3 ) , 끝내기 : ( 4 ) >> ";	
		std::cin >> SEL_mode;

		switch (SEL_mode) {

		case 1: { //예약

			reservation();
			break;
		}
		case 2:{ //취소

			cancel();
			break;
		}
		case 3: { //보기

			r_show();
			break;
		}
		case 4: { //종료
			std::cout << "예약 시스템을 종료합니다." << std::endl;
			break; 
		}
		default: {

			std::cout << "허용되는 동작이 아닙니다." << std::endl;
			break; 
		}}
	}
}