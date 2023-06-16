#include "Morse.h"

void Morse::txt2morse(std::string text , std::string &morse) {
	//대문자 입력시 소문자로 변경 (모스부호는 대소문자 구별 X)
	std::transform(text.begin(), text.end(), text.begin(), ::tolower);

	for (int text_length = 0; text_length < text.size(); text_length++) {
		for (int text_scan = 0; text_scan < 26; text_scan++) {

			if (alphabet[text_scan][0].at(0) == text.at(text_length)) { morse.append(alphabet[text_scan][1] + " "); }
		}

		for (int num_scan = 0; num_scan < 10; num_scan++) {

			if (digit[num_scan][0].at(0) == text.at(text_length)) { morse.append(digit[num_scan][1] + " "); }
		}

		for (int symbol_scan = 0; symbol_scan < 7; symbol_scan++) {

			if (text.at(text_length) == symbol[symbol_scan][0].at(0)) { morse.append(symbol[symbol_scan][1] + " "); }
		}
	}
}

bool Morse::morse2txt(std::string morse, std::string& text) {

	std::cout << "\n\n모스 부호를 다시 영문 텍스트로 바꿉니다." << std::endl;
	
	std::istringstream iss(morse);
	std::string tmp;
	
	bool DoOnce = false;

	while (std::getline(iss, tmp, ' ')) { // 공백 문자로 문자열을 분리하여 처리

		if (tmp.empty() && DoOnce == false) { // 빈 문자열인 경우 공백 문자로 처리 및 공백문자를 단 하나만 출력하게 함.
			DoOnce = true;
			text.append(symbol[6][0]);

		} else {

			for (int morse_text_scan = 0; morse_text_scan < 26; morse_text_scan++) {
				if (tmp == alphabet[morse_text_scan][1]) {
					text.append(alphabet[morse_text_scan][0]);
					DoOnce = false;
				}
			}

			for (int morse_num_scan = 0; morse_num_scan < 10; morse_num_scan++) {
				if (tmp == digit[morse_num_scan][1]) {
					text.append(digit[morse_num_scan][0]);
					DoOnce = false;
				}
			}

			for (int morse_symbol_scan = 0; morse_symbol_scan < 7; morse_symbol_scan++) {
				if (tmp == symbol[morse_symbol_scan][1]) {
					text.append(symbol[morse_symbol_scan][0]);
					DoOnce = false;
				}
			}
		}
	}
	return true;
}