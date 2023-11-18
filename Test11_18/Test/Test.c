#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//char * Test1(char * src)
//{
//  memset(src, 'x', 5);
//  return src;
//}
//
//
//char * Test2(char * src)
//{ 
//  src = (char*)malloc(10);//扩展10字节
//  if (src == NULL)
//  {
//    perror(malloc);
//  }
//  else
//  {
//    int n = 0;
//    for (char  i = 'a'; i<='j'; i++)
//    {
//      src[n] = i;
//      n++;
//    }
//    src[n] = '\0';
//    return src;
//  }
//}
//
//char* Test3(char* src)
//{
//  src = (char*)calloc(10,sizeof(char));//扩展10字节
//  if (src == NULL)
//  {
//    perror(malloc);
//  }
//  else
//  {
//    int n = 0;
//    for (char i = 'a'; i <= 'j'; i++)
//    {
//      src[n] = i;
//      n++;
//    }
//    src[n] = '\0';
//    return src;
//  }
//}
//
//int main()
//{
//  char arr[] = "abcdef";
//  printf("原字符串%s\n", arr);
//  printf("memset的使用%s\n",Test1(arr));
//  printf("malloc的使用%s\n", Test2(arr));
//  printf("calloc的使用%s\n", Test3(arr));
//}


int main()
{
  int** arr = 0;

  arr = (int**)malloc(3 * sizeof(int*)); //先开出行数空间，二级指针

  for (int i = 0; i < 3; i++)
  {
    arr[i] = (int*)malloc(5 *sizeof(int*)); //开出列数空间，一级指针
  }

  
  for (int i = 0; i < 3; i++)//开始遍历
  {
    for (int j = 0; j < 5; j++)
    {
      //*(*(arr+i)+j) = j;   //赋值

      printf("%p ", &arr[i][j]);
    }
    printf("\n");
  }
}
