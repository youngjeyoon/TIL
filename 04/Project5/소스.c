#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight_on_earth;

	printf("�����Ը� �Է��ϼ���(����: kg):");
	scanf("%lf", &weight_on_earth);

	double weight_on_moon;
	weight_on_moon = weight_on_earth * 0.17;
	
	printf("�޿����� �����Դ� %lf kg�Դϴ�.",weight_on_moon);



	return 0;
}