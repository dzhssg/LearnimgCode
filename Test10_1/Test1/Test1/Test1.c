#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
  int num = 0;
  int count = 0;
  printf("������һ����\n");
  scanf("%d", &num);
  while(num)
  {
    if (num % 2 == 1)
    {
      count++;
    }
     num = num / 2;
  }
  printf("��������1�ĸ���Ϊ%d",count);
}
