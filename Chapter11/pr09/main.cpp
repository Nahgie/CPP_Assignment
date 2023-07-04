#include "Phone.h"

std::istream& operator >> (std::istream& in, Phone& phone) {
	
	std::cout << "이름 : ";
	getline(in, phone.name);
	
	std::cout << "전화번호 : ";
	getline(in, phone.telnum);
	
	std::cout << "주소 : ";
	getline(in, phone.address);

	return in;
}

std::ostream& operator << (std::ostream& out, Phone phone) {

	out << "(" << phone.name << " , " << phone.telnum << " , " << phone.address << ")";
	return out;
}

int main() {

	Phone girl, boy;
	std::cin >> girl >> boy;
	std::cout << girl << std::endl << boy << std::endl;
}