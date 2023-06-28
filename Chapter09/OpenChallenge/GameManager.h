#pragma once
#include "Headers.h"

class GameManager {
private :

	Human *Player; //플레이어
	Monster *Enemy; //적
	Food *Item; //아이템

	char field[10][20]; //필드의 크기
	int rDirection(); //랜덤방향

	void initField(); //필드 생성
	void refreshField(); //필드 새로고침
	void playerControl(); //플레이어 이동
	void setObjLocation(GameObject *OBJ ,int mode); //오브젝트 이동
	
	bool itemDelay(int branch, int times); //아이템 이동 딜레이

public :

	GameManager();
	~GameManager();

	void init(); //게임 실행
};