#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Is_Prime(int n)
//{
//	if (n == 1 || n < 1)				//��������<1����=1����������
//	{
//		return 0;
//	}
//	for (int i = 2; i < n; i++)			//�������ֿ��Ա�2����������������������
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
//	//����ܱ�4�����������ܱ�100�����������ꡣ����ܱ�400�����������ꡣ
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
void init(int arr[],int n)	//ʵ�ֺ���init() ��ʼ������Ϊȫ0
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	printf("\n");
}


void reverse(int arr[],int l, int r)	//ʵ��reverse()  �����������Ԫ�ص����á�
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
	printf("��ӡ����ȫԪ��:");
	for (int i = 0; i < sz; i++)//ʵ��print()  ��ӡ�����ÿ��Ԫ��
	{
		printf("%d  ", arr[i]);
	}

	

	reverse(arr, l, r);
	printf("����Ԫ�ص�����:");
	for (int i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}

	

	init(arr, sz);
	printf("��ʼ������Ϊ��:");
	for (int i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}

}
