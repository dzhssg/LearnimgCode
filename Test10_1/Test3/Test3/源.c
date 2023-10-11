#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
  int a[] = { 1,2,3,4,5,1,2,3,4 };

  int i = 0;
  int sz = sizeof(a) / sizeof(a[0]);   //数组大小

  for (i = 0; i < sz; i++)	//循环数组每个元素
  {
    int count = 0;				//计数变量
    int j = 0;
    for (j = 0; j < sz; j++)		//循环数组每个元素
    {
      if (a[i] == a[j])		//当元素相同的时候，count++
        count++;			//因为两次都是从a[0]遍历，所以count最少为1
    }
    if (count == 1)				//当数组某个元素单独出现，打印出来
      printf("%d\n", a[i]);
  }

  return 0;
}
