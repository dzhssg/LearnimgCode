#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("«Î ‰»Îaµƒ÷µ:\n");
	scanf("%d", &a);
	int n = a;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += a;
		a = n + (a * 10);
	}
	printf("a+aa+aaa+aaaa+aaaaa=%d", sum);
}