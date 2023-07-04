#include<iostream>

int main() {
	
	int ch{};
	
	while ((ch = std::cin.get()) != EOF) {
	
		if (ch == ';') {
		
			std::cout.put('\n');
			std::cin.ignore(100, '\n');
		}
		else { std::cout.put(ch); }
	}
}