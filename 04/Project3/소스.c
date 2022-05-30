#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 04

	double f;

	printf("화씨값을 입력하시오:");
	scanf("%lf", &f);

	double c;
	c = (5.0 / 9.0) * (f - 32.0);

	printf("섭씨값은 %lf도입니다.",c);

	return 0;
}

