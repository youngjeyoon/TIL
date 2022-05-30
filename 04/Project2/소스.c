#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 03

	double x, y;

	printf("»ï°¢ÇüÀÇ ¹Øº¯:");
	scanf("%lf", &x);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ:");
	scanf("%lf", &y);

	double area;
	area = x * y * 0.5;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %lf", area);

	return 0;
}
