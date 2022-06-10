#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int user;

	printf("정수를 입력하시오:");
	scanf("%d", &user);

	do
	{
		

		printf("%d", user % 10);
		user = user / 10;
		
	} while (user > 0);

	return 0;
}