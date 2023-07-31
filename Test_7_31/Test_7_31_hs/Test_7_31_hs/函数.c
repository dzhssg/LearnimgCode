#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Is_Prime(int n)
//{
//	if (n == 1 || n < 1)				//输入数字<1或者=1，不是素数
//	{
//		return 0;
//	}
//	for (int i = 2; i < n; i++)			//输入数字可以被2到它本身整除，不是素数
//	{
//		if (n % i == 0)
//		{
//
//			return 0;
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100;  i <= 200; i++)
//	{
//		if (Is_Prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	
//	return 0;
//
//}
//int Is_l_Year(int year)
//{
//	//年份能被4整除，但不能被100整除，是闰年。年份能被400整除，是闰年。
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	for (int i = 1000;  i <= 2000; i++)
//	{
//		if (Is_l_Year(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	
//	return 0;
//}
void init(int arr[],int n)	//实现函数init() 初始化数组为全0
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	printf("\n");
}


void reverse(int arr[],int l, int r)	//实现reverse()  函数完成数组元素的逆置。
{
	for (int i=0;i<(l+r)/2;i++)
	{
		int tmp;
		tmp = arr[l];
		arr[l] = arr[r];
		arr[r] = tmp;
		l++;
		r--;
	}
	printf("\n");
}


int main() 
{
	int arr[5] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int l = 0;
	int r = sz - 1;
	printf("打印数组全元素:");
	for (int i = 0; i < sz; i++)//实现print()  打印数组的每个元素
	{
		printf("%d  ", arr[i]);
	}

	

	reverse(arr, l, r);
	printf("数组元素的逆置:");
	for (int i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}

	

	init(arr, sz);
	printf("初始化数组为零:");
	for (int i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}

}
