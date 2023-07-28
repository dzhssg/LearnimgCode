#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &n, &m);
	int max = 0;
	if (m > n)
	{
		max = n;
	}
	else
	{
		max = m;
	}
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("最大公约数是：%d\n",max);
			break;
		}
		max--;
	}
}
