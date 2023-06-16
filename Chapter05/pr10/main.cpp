#include "Buffer.h"

Buffer& append(Buffer& b, std::string text) {

	b.add(text);

	return b;
}

int main() {

	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
	return 0;
}