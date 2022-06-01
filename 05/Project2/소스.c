#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 세 변수 중 최댓값 구하기

	int x, y, z, max;
	
	printf("정수1 입력:");
	scanf("%d", &x);

	printf("정수2 입력:");
	scanf("%d", &y);

	printf("정수3 입력:");
	scanf("%d", &z);

	/*max = (x > y) ? x : y;
	max = (max > z) ? y : z;*/

	max = (x > y) ? ((x > z) ? x : z ):((y > z) ? y : z);


	printf("가장 큰 수는 %d 입니다.\n", max);

	return 0;
}