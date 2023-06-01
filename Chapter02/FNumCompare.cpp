#include <iostream>

int main() {

	double Fnum[5];
	double Result = 0;

	std::cout << "5 개의 실수를 입력하라 >> ";
	std::cin >> Fnum[0] >> Fnum[1] >> Fnum[2] >> Fnum[3] >> Fnum[4];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			if (Fnum[i] >= Fnum[j] && Result < Fnum[j]) {
				
				Result = Fnum[j];

			}
		
		}
	}

	std::cout << "제일 큰 수 = " << Result << std::endl;

	return 0;
}