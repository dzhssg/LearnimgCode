#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fact(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	
	else 
	{
		return n * Fact(n - 1);
	}
		
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = Fact(n);
	printf("%d\n", sum);
	return 0;
}