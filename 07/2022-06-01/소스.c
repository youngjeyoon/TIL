#include <stdio.h>

int main()
{
	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			printf("%d", j);
		printf("\n");
	}

	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
			printf("%d", j);
		printf("\n");
	}

	


	return 0;
}