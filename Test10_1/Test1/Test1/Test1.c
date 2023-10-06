#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
  int num = 0;
  int count = 0;
  printf("请输入一个数\n");
  scanf("%d", &num);
  while(num)
  {
    if (num % 2 == 1)
    {
      count++;
    }
     num = num / 2;
  }
  printf("二进制中1的个数为%d",count);
}
