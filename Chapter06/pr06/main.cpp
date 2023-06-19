#include <iostream>
#include "ArrayUtility2.h"

int main() {

	int x_buff[5]{ 0, }, y_buff[5]{ 0, }, retSize = 0;
	int full_buff_size = (sizeof(x_buff) / sizeof(*x_buff) + sizeof(y_buff) / sizeof(*y_buff)); //x_buff 와 y_buff 배열을 합한 크기 ( 5 + 5 )

	std::cout << "정수를 5개 입력하라. 배열 x에 삽입한다. >>";
	std::cin >> x_buff[0] >> x_buff[1] >> x_buff[2] >> x_buff[3] >> x_buff[4];

	std::cout << "정수를 5개 입력하라. 배열 y에 삽입한다. >>";
	std::cin >> y_buff[0] >> y_buff[1] >> y_buff[2] >> y_buff[3] >> y_buff[4];

	int *address_1 = ArrayUtility2::concat(x_buff, y_buff, full_buff_size);
	int *address_2 = ArrayUtility2::remove(x_buff, y_buff, full_buff_size, retSize);

	std::cout << "합친 정수 배열을 출력한다." << std::endl;
	for (int i = 0; i < full_buff_size; i++) { std::cout << address_1[i] << " "; }

	std::cout << "\n배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << std::endl;
	for (int j = 0; j < address_2[j] != NULL; j++) { std::cout << address_2[j] << " "; }
	
	delete[] address_1;
	delete[] address_2;
}