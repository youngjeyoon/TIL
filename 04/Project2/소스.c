#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 03

	double x, y;

	printf("�ﰢ���� �غ�:");
	scanf("%lf", &x);

	printf("�ﰢ���� ����:");
	scanf("%lf", &y);

	double area;
	area = x * y * 0.5;

	printf("�ﰢ���� ����: %lf", area);

	return 0;
}
