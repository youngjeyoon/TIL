#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 항상 결과가 절댓값으로 출력

	double x, y;

	printf("두실수입력:");
	scanf("%lf %lf", &x, &y);

	if (x > 0)
	{
		if (y > 0)
			printf("결과값 : %lf\n", x + y);
		else
			printf("결과값 : %lf\n", x - y);
	}
	else
	{
		if (y > 0)
			printf("결과값 : %lf\n", -x + y);
		else
			printf("결과값 : %lf\n", -x - y);
	}
	

	return 0;
}