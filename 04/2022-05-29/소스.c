#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 쉽게 배우는 C언어 3장 Programming
	// 01
	
	double x, y, z;

	printf("실수를 입력하시오:");
	scanf("%lf", &x);

	printf("실수를 입력하시오:");
	scanf("%lf", &y);

	printf("실수를 입력하시오:");
	scanf("%lf", &z);

	double sum, avg;
	sum = x + y + z;
	avg = sum / 3;

	printf("합은 %lf이고 평균은 %lf입니다.", sum, avg);

	return 0;
}