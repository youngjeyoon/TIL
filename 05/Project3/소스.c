#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 10진수 8진수 16진수 출력하기

	int x;

	printf("정수를 입력하세요 :");
	scanf("%d", &x);
	
	printf("%d %#o %#x", x , x, x );


	return 0;
}