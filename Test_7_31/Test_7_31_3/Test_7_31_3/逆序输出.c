#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void interchange(int arr[], int left, int right)
{

    for (int i = 0; i < 5; i++) //空杯置换原理
    {
        int tmp;
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
int main()
{
    int left = 0;
    int arr[10] = { 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int right = n - 1;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    //遍历输入
    interchange(arr, left, right);//用函数交换
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    //遍历输出
    return 0;
}