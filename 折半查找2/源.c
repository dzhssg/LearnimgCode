#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,4,5,6,7,8,9,10 };
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (mid < k)
		{
			left = mid + 1;
		}
		if (mid > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
		}
	}
	if (left > right);
	{
		printf("没有找到");
	}
	return 0;
}