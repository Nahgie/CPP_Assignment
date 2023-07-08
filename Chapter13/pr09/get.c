#include <stdio.h>

int get() {
	int c;
	printf_s("숫자를 입력하세요 >> ");
	scanf_s("%d",&c);
	return c;
}