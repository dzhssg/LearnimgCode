#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void mul(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);
//����%2d�е�2��ʾ�������������룬���Ҷ��룻%-2d�����ʾ�������
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("������˷��ھ�����У�");
	scanf("%d", &n);
	mul(n);
	return 0;
}
