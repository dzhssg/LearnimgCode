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
//其中%2d中的2表示输出两格，数向后靠齐，即右对齐；%-2d，则表示数左对齐
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("请输入乘法口诀表的行：");
	scanf("%d", &n);
	mul(n);
	return 0;
}
