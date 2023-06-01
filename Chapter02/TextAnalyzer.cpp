#include <iostream>

int main() {

	char text[10001];
	int total_text_num = 0;

	std::cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << std::endl;
	std::cin.getline(text, 10000, ';');

	for (int i = 0 ; i <= strlen(text) ; i++) {
		
		text[i] = tolower(text[i]); // 알파벳 대문자를 소문자로 바꿈

		if (isalpha(text[i]) != 0)	{ total_text_num++; } // 입력된 알파벳 개수를 저장
	}
	std::cout << "총 알파벳 수 " << total_text_num << std::endl;
	
	for (int j = 0; j < 26; j++) {

		int num_of_chars = 0;

		for (int a = 0; a <= strlen(text); a++) {
			
			if (text[a] == (char)(j + 97)) { num_of_chars++; } // 각각의 알파벳 개수를 불러와 num_of_chars 변수에 저장

		}
		std::cout << (char)(j + 97) << " (" << num_of_chars << ") \t: "; // a to z 까지의 (int)개수를 출력

		for (int b = 0; b <= strlen(text); b++) {

			if (text[b] == (char)(j + 97)) { std::cout <<"*"; } //각각의 알파벳 개수만큼 (char)'*'을 출력함
		
		}
		std::cout << std::endl;
	}
	
	return 0;
}