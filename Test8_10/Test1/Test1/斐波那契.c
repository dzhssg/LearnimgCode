#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Fib(int n)  //递归
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入\n");
//	while(scanf("%d", &n) !=EOF)
//	{
//		int P = Fib(n);
//		printf("第%d个斐波那契数为:%d\n",n,P);
//	}
//	return 0;
//}


int Fib(int n)		//非递归
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()			
{

	int n = 0;
	printf("请输入\n");
	while(scanf("%d", &n) != EOF)
	{
		int p = Fib(n);
		printf("第%d个斐波那契数为:%d\n", n, p);
	}
	return 0;
}