#pragma once
#include "Headers.h"
#include <string>

class ProductManager {
private :

	Product *goods[100]; //상품데이터 저장배열 (최대 100개 까지 저장가능)
	static int setID; //상품ID

	void fullScans(); //등록된 상품 일괄검색
	void addGoods(); //상품 추가

public :

	void init(); //매니저 실행
};