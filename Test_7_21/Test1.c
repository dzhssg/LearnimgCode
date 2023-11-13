
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
retry:
	scanf("%d %d", &a, &b);
	if (a>0 && a<10000 && b>0 && b<10000)
	{
		printf("%d %d", a/b , a%b);
	}
	else
	{
		printf("输入的数不符合条件,请重新输入");
		goto retry;
	}
	return 0;
}