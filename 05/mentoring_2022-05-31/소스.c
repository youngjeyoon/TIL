#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// �׻� ����� �������� ���

	double x, y;

	printf("�νǼ��Է�:");
	scanf("%lf %lf", &x, &y);

	if (x > 0)
	{
		if (y > 0)
			printf("����� : %lf\n", x + y);
		else
			printf("����� : %lf\n", x - y);
	}
	else
	{
		if (y > 0)
			printf("����� : %lf\n", -x + y);
		else
			printf("����� : %lf\n", -x - y);
	}
	

	return 0;
}