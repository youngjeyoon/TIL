#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	
	printf("���� �Է��ϼ���:");
	scanf("%d", &n);

	
	
	for ( int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		for (int j = 0; j < (n - i + 1); j++)
			printf(" ");
		for (int j = 11; j > i; j--)
				printf("*");
			printf("\n");
	}

	for (int i = n; i > 0; i--)
	{
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int j = 0; j <= n - i; j++)
				printf("*");
			for (int j = 0; j <= n - i; j++)
				printf(" ");
			for (int j = 0; j < i; j++)
				printf("*");
		printf("\n");
	}

	/*for (i = n; i > 0; i--)
	{
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	for (i = 1; i <= n; i++)
		for (j = 0; j < (n - i); j++)
			printf(" ");
		for (j = 0; j < i; j++)
		printf("*");
	printf("\n");*/

	
	

	return 0;
}




