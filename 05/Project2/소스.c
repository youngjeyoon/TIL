#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// �� ���� �� �ִ� ���ϱ�

	int x, y, z, max;
	
	printf("����1 �Է�:");
	scanf("%d", &x);

	printf("����2 �Է�:");
	scanf("%d", &y);

	printf("����3 �Է�:");
	scanf("%d", &z);

	/*max = (x > y) ? x : y;
	max = (max > z) ? y : z;*/

	max = (x > y) ? ((x > z) ? x : z ):((y > z) ? y : z);


	printf("���� ū ���� %d �Դϴ�.\n", max);

	return 0;
}