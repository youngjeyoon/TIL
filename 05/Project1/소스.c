#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1234 �� �Է��ϸ� 4321 �� ���

	int x;
	printf("������ �Է��Ͻÿ�:");
 	scanf("%d`", &x);

	do
	{
			/*1234%10 = 4
			1234 / 10 = 123
			123 % 10 = 3
			123 / 10 = 12
			12 % 10 = 2
			12 / 10 = 1
			1 % 10 = 1*/
		printf("%d", x % 10);
		x = x / 10;
	} while (x > 0); // ������ ���� �� �ݺ��ض�

	return 0;
}