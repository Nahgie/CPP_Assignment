#include <iostream>
#include <string>

int main() {

	static int earnings = 0;
	std::string m_name;
	
	std::cout << "에스프레소 2000원 , 아메리카노 2300원 , 카푸치노 2500원입니다." << std::endl;

	while ((earnings >= 20000) != 1) {
		
		int paid = 0;
		int pcs = 0;

		std::cout << "주문>>";
		std::cin >> m_name >> pcs;
		
		if (m_name == "에스프레소") {
			
			paid = 2000;
			earnings += (paid * pcs);
			std::cout << (paid * pcs) << "원입니다. 맛있게 드세요" << std::endl;

		} else if (m_name == "아메리카노") {

			paid = 2300;
			earnings += (paid * pcs);
			std::cout << (paid * pcs) << "원입니다. 맛있게 드세요" << std::endl;

		} else if (m_name == "카푸치노") {

			paid = 2500;
			earnings += (paid * pcs);
			std::cout << (paid * pcs) << "원입니다. 맛있게 드세요" << std::endl;

		} else {
	
			std::cout << "잘못 된 요청입니다." << std::endl;

		}

	}

	std::cout << "오늘 " << earnings << "원을 판매하여 카페를 닫습니다. 내일 봐요~" << std::endl;

	return 0;
}