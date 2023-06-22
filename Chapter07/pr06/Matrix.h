#pragma once
#include <iostream>

class Matrix {
private :

	int m_arr[4];

public :

	Matrix() : Matrix(0, 0, 0, 0) {}
	Matrix(int n1, int n2, int n3, int n4) {
		this->m_arr[0] = n1;
		this->m_arr[1] = n2;
		this->m_arr[2] = n3;
		this->m_arr[3] = n4;
	}

	Matrix(Matrix& mtrx) {
	
		for (int c_index = 0; c_index < 4; c_index++) { this->m_arr[c_index] = mtrx.m_arr[c_index]; }
	
	}
	
	friend Matrix operator + (Matrix& base, Matrix& mtrx);
	friend Matrix& operator += (Matrix& base, Matrix& mtrx);
	friend bool operator == (Matrix& base, Matrix& mtrx);
	
	/*
	Matrix operator + (Matrix& mtrx) {

		Matrix tmp;

		for (int p_index = 0; p_index < 4; p_index++) { tmp.m_arr[p_index] = this->m_arr[p_index] + mtrx.m_arr[p_index]; }
		
		return tmp;
	}

	Matrix& operator += (Matrix& mtrx){

		for (int pa_index = 0; pa_index < 4; pa_index++) { this->m_arr[pa_index] += mtrx.m_arr[pa_index]; }
		
		return *this;
	}

	bool operator == (Matrix& compare) {

		return (this->m_arr[0] == compare.m_arr[0]) && (this->m_arr[1] == compare.m_arr[1]) && (this->m_arr[2] == compare.m_arr[2]) && (this->m_arr[3] == compare.m_arr[3]) ? true : false;
	}
	*/
	void show() { std::cout << "Matrix = {" << this->m_arr[0] << " , " << this->m_arr[1] << " , " << this->m_arr[2] << " , " << this->m_arr[3] << "}" << std::endl; }
};