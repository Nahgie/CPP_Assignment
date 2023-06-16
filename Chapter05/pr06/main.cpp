#include <iostream>

char& find(char a[] , char c , bool& success) {
	
	int i = 0;

	while (1) {
		
		if (a[i] == c) {
			
			success = true;
			return a[i]; //일치한 항목을 반환

		} else if (a[i] == '\0') {
			
			success = false;
			break;
		
		}
		i++;
	}
}

int main() {
	
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);

	if (b == false) {
		std::cout << "M을 발견할 수 없다." << std::endl;
		return 0;
	}

	loc = 'm'; // 반환한 항목에 대입
	std::cout << s << std::endl;

	return 0;
}