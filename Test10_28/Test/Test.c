#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//  int arr[] = { 1,2,3,4,5 };
//  int* pa = arr;
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  for (int i = 0; i < sz; i++)
//  {
//    printf("%d ", *pa++);
//  }
//}



//void  sort(int arr[], int sz)
//{
//  int i = 0;
//  int j = 0;
//  for (i = 0; i < sz - 1; i++)
//  {
//    for (j = 0; j < sz - i - 1; j++)
//    {
//      if (arr[j] > arr[j + 1])
//      {
//        int tmp;
//        tmp = arr[j];
//        arr[j] = arr[j + 1];
//        arr[j + 1] = tmp;
//      }
//    }
//  }
//}
//
//int main()
//{
//  int arr[] = { 6,4,5,8,9,7 };
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  sort(arr, sz);
//  for (int i = 0; i < sz; i++)
//  {
//    printf("%d ", arr[i]);
//  }
//}


//
//void swap(int arr[], int sz)
//
//{
//  int left = 0;
//  int right = sz - 1;
//  int tmp = 0;
//  while (left < right)
//  {
//    // 从前往后，找到一个偶数，找到后停止
//    while (arr[left] % 2 == 1)
//    {
//      left++;
//    }
//
//    // 从后往前找，找一个奇数，找到后停止
//    while (arr[right] % 2 == 0)
//    {
//      right--;
//    }
//
//    // 如果偶数和奇数都找到，交换这两个数据的位置
//    // 然后继续找，直到两个指针相遇
//    if (left < right)
//    {
//      tmp = arr[left];
//      arr[left] = arr[right];
//      arr[right] = tmp;
//    }
//  }
//}
//int main()
//{
//  int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  swap(arr, sz);
//  for (int i = 0; i < sz; i++)
//  {
//    printf("%d ", arr[i]);
//  }
//  return 0;
//}




void swap1(char *src ,int k)
{
  int len = strlen(src);
  int times = k % len;//去除多余的运行次数

  for (int i = 0; i < times; i++)
  {
    char tmp = src[0];//把第一个元素给tmp
    int j = 0;
    for (j = 0; j < len - 1; j++)//将后面的元素移到前面来
    {
      src[j] = src[j + 1];
    }
    src[j] = tmp;//最后将原来第一个元素放到数组最后面
  }
}


/*借助库函数来完成*/
void swap2(char* str, int  k)
{
  int len = strlen(str);
  int times = k % len;
  char tmp[100] = { 0 };
  //拷贝
  strcpy(tmp, str + times);
  //拼接到指定位置tmp,从str开始拼接3个
  strncat(tmp, str, k);
  //再将tmp全部拷贝到str中
  strcpy(str, tmp);

}


void Revese(char * str, int left, int right)
{
  while (left < right)
  {
    char tmp;
    tmp = str[left];
    str[left] = str[right];
    str[right] = tmp;
    left++;
    right--;
  }

}

void swap3(char* str, int  k)
{
  int len = strlen(str);
  int time = k % len;
  Revese(str, 0, k - 1);
  Revese(str, k, len-1);
  Revese(str, 0, len-1);
   
}


int main()
{
  char str[] = "abcde";
  printf("请输入要输入要跳跃的数的个数：\n");
  int k = 0;
  scanf("%d", &k);
  swap3(str,k);
  printf("%s", str);
}
