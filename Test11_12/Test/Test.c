#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//  unsigned char a = 200;
//  unsigned char b = 100;
//  unsigned char c = 0;
//  c = a + b;
//  printf("%d%d", a + b, c);
//  return 0;
//}

//int main()
//{
//  int a = 1;
//  char* p = (char*)&a;
//  if (*p == 1)
//  {
//    printf("小端");
//  }
//  else
//  {
//    printf("大端");
//  }
//}
#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//  void* ret = dest;
//  assert(dest && src);
//    //从前往后
//    if (dest < src)
//    {
//      while (num--)
//      {
//        *(char*)dest = *(char*)src;
//        dest = *(char*)dest + 1;
//        src = *(char*)src + 1;
//      }
//    }
//    //从后往前
//    else
//    {
//      while(num--)
//      {
//        *((char *)dest + num) = *((char*)src + num);
//      }
//    }
//    return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 6, arr1, 16);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
//
//
#include<stdlib.h>
int my_atoi(const char* str)
{
  int ret = 0;
  assert(str);
  while(*str)
  {
    ret = (ret * 10) + (*str) -'0';
    str++;
  }
  return ret;
}


int main()
{
  int i;
  char buffer[256]="123";
  i = my_atoi(buffer);
  printf("The value entered is %d. Its double is %d.\n", i, i * 2);
  return 0;
}
