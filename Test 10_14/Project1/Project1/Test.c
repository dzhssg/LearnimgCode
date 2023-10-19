#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//  int num = 10;
//  int* p = &num;
//
//  char ch = 'w';
//  char* pc = &ch;
//
//  printf("%d\n", sizeof(p));
//  printf("%d\n", sizeof(pc));
//  return 0;
//}
//int main()
//{
//  int n = 0x11223344;
//    char * p = &n;
//    *p = 0;
//    return 0;
//}
//int main()
//{
//  int n = 0x11223344;
//  int * p  = &n;
//  char *pc = &n;
//  printf("p=%p\n", p);
//  printf("p+1=%p\n", p+1);
//  printf("pc=%p\n", pc);
//  printf("pc+1=%p\n", pc+1);
//  return 0;
//}

//int main()
//{
//  int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  int i = 0;
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  int* p = &arr[0];
//  for (i = 0; i < sz; i++)//指针方式访问
//    {
//      printf("%d ", *(p+i));
//    }
  //for (i = 0; i < sz; i++)//数组下标的方式访问
  //{
  //  printf("%d ", arr[i]);
  //}
//}

//int main()
//{
//  
//  const int n = 100;
//  //n = 20;
//  int* p = &n;
//  * p = 20;
//  printf("%d",n);
//  return 0;
//}

int main()
{
  int a = 0x11223344;
  char* pc = (char*)&a;
  *pc = 0;
  printf("%x\n", a);
  return 0;
}
