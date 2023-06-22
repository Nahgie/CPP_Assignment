#include "Matrix.h"

Matrix operator + (Matrix& base ,Matrix& mtrx) {

	Matrix tmp;

	for (int p_index = 0; p_index < 4; p_index++) { tmp.m_arr[p_index] = base.m_arr[p_index] + mtrx.m_arr[p_index]; }
	
	return tmp;
}

Matrix& operator += (Matrix& base , Matrix& mtrx) {
	
	for (int pa_index = 0; pa_index < 4; pa_index++) { base.m_arr[pa_index] += mtrx.m_arr[pa_index]; }

	return base;
}

bool operator == (Matrix& base ,Matrix& compare) {

	return (base.m_arr[0] == compare.m_arr[0]) && (base.m_arr[1] == compare.m_arr[1]) && (base.m_arr[2] == compare.m_arr[2]) && (base.m_arr[3] == compare.m_arr[3]) ? true : false;
}

int main() {

	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;

	c = a + b;
	a += b;
	a.show(); b.show(); c.show();

	if (a == c) { std::cout << "a and c are the same" << std::endl; }
	
}