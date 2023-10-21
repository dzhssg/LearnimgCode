#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//  int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  printf("&arr[0] = %p\n", &arr[0]);
//  printf("arr     = %p\n", arr);
//  printf("&arr    = %p\n", &arr);
//  return 0;
//}
//int main()
//{
//
//  
//  	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//  	printf("&arr[0]   = %p\n", &arr[0]);
//  	printf("&arr[0]+1 = %p\n", &arr[0]+1);
// 
//  	printf("arr       = %p\n", arr);
//  	printf("arr+1     = %p\n", arr+1);
//  
//  	printf("&arr      = %p\n", &arr);
//  	printf("&arr+1    = %p\n", &arr+1);
//  
//  	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//[][][][][][][][][][]
//	//0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//void test(int arr[])
//{
//  int sz2 = sizeof(arr) / sizeof(arr[0]);
//  printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//  int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  int sz1 = sizeof(arr) / sizeof(arr[0]);
//  printf("sz1 = %d\n", sz1);
//  test(arr);
//  return 0;
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//*(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//int main()
//{
//  int a = 1;
//  int* p = &a;
//  int* *pa = &p;
//  printf("%d", *(*pa));
//}

//int main()
//{
//  int a = 1; int b = 2; int c = 3; int d = 4; int e = 5;
//  int* parr[5] = {&a,&b,&c,&d,&e};
//  for (int i = 0; i < 5; i++)
//  {
//    printf("%d ", *(parr[i]));
//  }
//}
//int main()
//{
//  int arr1[] = {1,2,3,4,5};
//  int arr2[] = {2,3,4,5,6};
//  int arr3[] = {3,4,5,6,7};
//  int* parr[3] = { arr1,arr2,arr3 };
//  for (int i = 0; i < 3; i++)
//  {
//    for (int j = 0; j < 5; j++)
//    {
//      printf("%d ", parr[i][j]);
//      //parr[i] == *(parr+i);
//      //parr[i][j] == *(*(parr + i)+j);
//      //parr[i][j] == (*(parr + i))[j];
//    }
//    printf("\n");
//  }
//}




////strlen实现
//int My_strlen (char * str)
//{
//  int count = 0;
//  while (*str)
//  {
//    str++;
//    count++;
//  }
//
//  return count;
//}
//
//int main()
//{
// 
//  int leng = My_strlen("abcde");
//  printf("strlen= %d ", leng);
//  
//}

#include <string.h>

char xz(char* ch, int k)
{
  printf("%s", ch);
  int m = strlen(ch);
  int n = m - k;
  int * p = &ch+k;
  while(k)
  {
    int tmp;
    tmp = *ch;
    *ch = &p;
    p = tmp;
    printf("%d", n);
    k--;
  }
 

}

int main()
{
  int k = 0;
  scanf("%d", &k);
  char ch = xz("ABCD", k);
  printf("%s", ch);
}

