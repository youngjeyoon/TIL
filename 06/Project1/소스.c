#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 3��

	int user;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &user);

	printf("���:");
	

	for (int i = 1; i <= user; i++)
	{
		if (user % i == 0)
			printf("%d ", i);
	}

	

	return 0;
}