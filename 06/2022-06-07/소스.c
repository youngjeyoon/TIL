#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, fact;

	fact = 1;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		fact = fact * i;

		printf("%d! �� %d�Դϴ�.\n",n,fact);

	return 0;
}