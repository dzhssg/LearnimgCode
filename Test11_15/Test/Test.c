#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int determine()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	
//	if (determine() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//int main()
//{
//
//  int* arr = (int*)malloc(sizeof(int) * 8);
//  for(int i=0;i<sizeof(arr))
//}

#include <stdio.h>
int main()
{
  int n = 9;
  float* pFloat = (float*)&n;
  printf("n的值为：%d\n", n);
  printf("*pFloat的值为：%f\n", *pFloat);
  *pFloat = 9.0;
  printf("num的值为：%d\n", n);
  printf("*pFloat的值为：%f\n", *pFloat);
}
