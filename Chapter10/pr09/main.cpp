#include <iostream>
#include <vector>

int main() {

	std::vector<int> vt;

	int in_number = -1 , sum = 0 , count = 0;

	while (true) {

		std::cout << "정수를 입력하세요(0을 입력하면 종료) >> ";
		std::cin >> in_number;

		if (in_number == 0) { 
			
			break; 
		
		} else {
			vt.push_back(in_number);

			sum += vt[count];

			count++;

			for (int i = 0; i < vt.size(); i++) { 
				
				std::cout << vt[i] << " "; 
			}

			std::cout << "\n평균 = " << sum / double(count) << std::endl;
		}
	}
}