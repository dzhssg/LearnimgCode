
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
		printf("�����������������,����������");
		goto retry;
	}
	return 0;
}