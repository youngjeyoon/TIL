#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 02

	double x;

	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &x);

	double mile;
	mile = x * 1609.0;

	printf("%lf������ %lf�����Դϴ�.", x, mile);


	return 0;
}