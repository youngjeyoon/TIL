#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 05

	double x;

	printf("�Ǽ��� �Է��ϼ���:");
	scanf("%lf", &x);

	double poly;
	poly = (3 * x * x) + (7 * x) + 11;

	printf("���׽��� ���� %lf", poly);


	return 0;
}