#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ���� ���� C��� 3�� Programming
	// 01
	
	double x, y, z;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &z);

	double sum, avg;
	sum = x + y + z;
	avg = sum / 3;

	printf("���� %lf�̰� ����� %lf�Դϴ�.", sum, avg);

	return 0;
}