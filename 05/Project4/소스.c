#include <stdio.h>

int main()
{
	// »ï°¢Çü ¸¸µé±â

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			printf("%d", j);
		printf("\n");
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}

	
	

	return 0;
}
