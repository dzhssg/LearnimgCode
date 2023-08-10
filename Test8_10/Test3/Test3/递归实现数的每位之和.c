#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  DigitSum(int n)			//计算一个数的每位之和（递归实现）
{
	
	int sum = 0;
	int m = 0;
	if (n != 0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + DigitSum(n);
	}
	return sum;

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", DigitSum(n));
}


//void print(int n)				//递归方式实现打印一个整数的每一位
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}