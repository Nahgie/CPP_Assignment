#include "Trace.h"

std::string Trace::log_data[100][2]; int Trace::stack_logs = 0;

void Trace::put(std::string tag, std::string message) {
	
	if (stack_logs == 99) {
		
		std::cout << "ERROR : 로그 저장소에 여유가 없습니다.		[ 저장된 로그 갯수 : " << stack_logs << " ]" << std::endl;

	} else {

		log_data[stack_logs][0] = tag; // 태그 저장
		log_data[stack_logs][1] = message; // 로그 메세지 저장
		stack_logs++;
	}
}

void Trace::print(std::string tag) {


	if (tag == "ALL") {

		std::cout << "\n\n----- 모든 Trace 정보를 출력합니다. -----\n"<< std::endl;

		for (int i = 0; i < stack_logs; i++) {
		
			std::cout << log_data[i][0] << " : " << log_data[i][1] << std::endl;
		
		}
	
	} else if (!tag.empty()) {

		std::cout << "\n\n----- " << tag << "태그의 정보를 출력합니다. -----\n" << std::endl;

		for (int i = 0; i < stack_logs; i++) {
			if (log_data[i][0] == tag) {
			
				std::cout << log_data[i][0] << " : " << log_data[i][1] << std::endl;
			
			}
		}

	} else {

		std::cout << "ERROR : 데이터를 찾을 수 없습니다." << std::endl;
	}
}