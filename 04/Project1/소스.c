#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 02

	double x;

	printf("마일을 입력하시오:");
	scanf("%lf", &x);

	double mile;
	mile = x * 1609.0;

	printf("%lf마일은 %lf미터입니다.", x, mile);


	return 0;
}