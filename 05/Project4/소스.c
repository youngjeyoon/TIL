#include <stdio.h>

int main()
{
	// 삼각형 만들기

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			printf("%d", j);
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}

	
	

	return 0;
}