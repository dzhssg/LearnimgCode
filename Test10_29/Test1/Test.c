#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int find1(char* str1, char* str2)
//{
//  char tmp[256] = { 0 };
//  strcpy(tmp, str1);
//  strcat(tmp, str1);
//  return strstr(tmp, str2) != NULL;
//
//}
//
//int main()
//{
//  int ret = find1("AABCD", "BCDAA");
//   printf("%d\n", ret);
//  return 0;
//}
//x行y列
//int FindNumber(int arr[][4], int x, int y,int key)
//{
//  int i = 0;
//  int j = x-1;
//  while (j >= 0  &&  i < y)
//  {
//    if (arr[i][j] < key)
//    {
//      i++;
//    }
//    else if(arr[i][j] > key)
//    {
//      j--;
//    }
//    else
//    {
//      return 1;
//    }
//       
//  }
//
//  return 0;
//}
//
//
//int main()
//{
//  int arr[][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//
//  int ret = FindNumber(arr, 4, 3, 12);
//
//  printf("%d", ret);
//
//}

//
//int main()
//{
//  char killer = 0;
//  for (killer = 'A'; killer <= 'D';killer++)
//  {
//    if ( (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//    {
//      printf("凶手是:%c", killer);
//      break;
//    }
//  }
//  return 0;
//}



//

//void print_arr(int arr[],int  sz)
//{
//  int i = 0;
//  for ( i = 0; i < sz; i++)
//  {
//    printf("%d ", arr[i]);
//  }
//  printf("\n");
//}
//
//int cmp(const void* e1, const void* e2)
//{
//  return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//
//    int arr[10] = { 1,9,6,8,7,5,4,3,2,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp);
//    print_arr(arr, sz);
//}

void func(int* arr, int len, int* pnum1, int* pnum2)
{
  int ret = 0;
  //整体异或
  for (int i = 0; i < len; i++)
  {
    ret ^= arr[i];
  }
  //从右往左 遇到一个一 就记录下来一个位置
  int pos = -1;
  for (int i = 0; i<32;i++)
  {
    if((ret&1)==1)
    {
      pos = i;
      break;
    }
  }

  for (int i = 0; i < len; i++)
  {
    if ((arr[i] >> pos) & 1)
    {
      *pnum1 ^= arr[i];
    }
    else
    {
      *pnum2 ^= arr[i];
    }
  }
}

int main()
{
  int ret1 = 0;
  int ret2 = 0;
  int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
  int len = sizeof(arr) / sizeof(arr[0]);
  func(arr, len, &ret1, &ret2);
  printf("%d %d\n", ret1, ret2);
 

}
