#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i < 8; i++)
	{
		for (j = 0; j < (7 - i); j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}