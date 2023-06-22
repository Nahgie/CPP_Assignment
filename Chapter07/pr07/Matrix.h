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

		for (int dc_index = 0; dc_index < 4; dc_index++) { this->m_arr[dc_index] = mtrx.m_arr[dc_index]; }
	}

	friend Matrix& operator >> (Matrix& base, int arr[]);
	friend Matrix& operator << (Matrix& base, int arr[]);

	/*
	Matrix& operator >> (int arr[]) {

		for (int c_index = 0; c_index < 4; c_index++) { arr[c_index] = this->m_arr[c_index]; }

		return *this;
	}

	Matrix& operator << (int arr[]) {

		for (int c_index = 0; c_index < 4; c_index++) { this->m_arr[c_index] = arr[c_index]; }

		return *this;
	}
	*/
	void show() { std::cout << "Matrix = {" << m_arr[0] << " " << m_arr[1] << " " << m_arr[2] << " " << m_arr[3] << "}" << std::endl; }
};