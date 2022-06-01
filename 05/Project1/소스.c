#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1234 를 입력하면 4321 로 출력

	int x;
	printf("정수를 입력하시오:");
 	scanf("%d`", &x);

	do
	{
			/*1234%10 = 4
			1234 / 10 = 123
			123 % 10 = 3
			123 / 10 = 12
			12 % 10 = 2
			12 / 10 = 1
			1 % 10 = 1*/
		printf("%d", x % 10);
		x = x / 10;
	} while (x > 0); // 조건이 참일 때 반복해라

	return 0;
}