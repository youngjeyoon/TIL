#include <stdio.h>
int main()
{
	// 6/20 월 오후 6시 407 홀수 408 짝수
	// 서술형, 시험범위 : 5,6,7 강

	// programming 2번
	
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}

	return 0;
}