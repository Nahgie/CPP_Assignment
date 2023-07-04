#include <iostream>
#include <iomanip>
#include <cctype>

int main() {

	for (int idx_draw_cnt = 0; idx_draw_cnt <= 3; idx_draw_cnt++) { //카테고리 그리기
			
		std::cout << std::left <<"dec" << '\t' << "hexa" << '\t' << "char" << '\t';
	}

	std::cout << std::endl;

	for (int hyphen_draw_cnt = 0; hyphen_draw_cnt <= 3; hyphen_draw_cnt++) { //구분선 그리기
		
		std::cout << std::left << "----\t----\t----\t"; 
	}

	std::cout << std::endl;

	for (int ascii_draw_cnt = 0; ascii_draw_cnt < 128; ascii_draw_cnt++) {

		std::cout << std::setw(3) << std::left << std::dec << ascii_draw_cnt << '\t' << std::hex << ascii_draw_cnt << '\t' << (std::isprint(ascii_draw_cnt) ? char(ascii_draw_cnt) : '.') << '\t';
		
		if (ascii_draw_cnt % 4 == 3) { std::cout << std::endl; } //루프 4번마다 한번씩 개행
	}
}