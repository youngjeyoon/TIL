#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight_on_earth;

	printf("몸무게를 입력하세요(단위: kg):");
	scanf("%lf", &weight_on_earth);

	double weight_on_moon;
	weight_on_moon = weight_on_earth * 0.17;
	
	printf("달에서의 몸무게는 %lf kg입니다.",weight_on_moon);



	return 0;
}