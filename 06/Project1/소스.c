#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 3번

	int user;

	printf("정수를 입력하시오:");
	scanf("%d", &user);

	printf("약수:");
	

	for (int i = 1; i <= user; i++)
	{
		if (user % i == 0)
			printf("%d ", i);
	}

	

	return 0;
}