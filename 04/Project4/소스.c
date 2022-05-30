#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 05

	double x;

	printf("실수를 입력하세요:");
	scanf("%lf", &x);

	double poly;
	poly = (3 * x * x) + (7 * x) + 11;

	printf("다항식의 값은 %lf", poly);


	return 0;
}