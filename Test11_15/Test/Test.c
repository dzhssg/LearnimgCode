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
//		printf("С��\n");
//	else
//		printf("���\n");
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
  printf("n��ֵΪ��%d\n", n);
  printf("*pFloat��ֵΪ��%f\n", *pFloat);
  *pFloat = 9.0;
  printf("num��ֵΪ��%d\n", n);
  printf("*pFloat��ֵΪ��%f\n", *pFloat);
}
