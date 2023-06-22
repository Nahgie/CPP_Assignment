#include "Book.h"

int main() {

	Book book("벼룩시장", 0, 50);
	if (!book) { std::cout << "공짜다" << std::endl; }
}