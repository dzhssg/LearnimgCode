#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 0;
	int find = 0;	//假设找不到
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			find = 1;
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (find == 0)
	{
		printf("找不到了");
	}
	return 0;
}