#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int user;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &user);

	do
	{
		

		printf("%d", user % 10);
		user = user / 10;
		
	} while (user > 0);

	return 0;
}