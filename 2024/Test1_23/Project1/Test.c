#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

  void SelectSortTest()
  {
    int arr[] = { 9,4,6,3,5,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    SelectSort(&arr, sz);
    PrintfArray(&arr, sz);
    printf("\n");
  }

  void BubbleSortTest()
  {
    int arr[] = { 9,4,6,3,5,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    SelectSort(&arr, sz);
    PrintfArray(&arr, sz);
    printf("\n");
  }

  void QuickSortTest1()
  {
    int arr[] = { 9,4,6,3,5,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    QuickSort1(arr, 0, sz - 1);
    PrintfArray(&arr, sz);
    printf("\n");
  }
  void QuickSortTest2()
  {
    int arr[] = { 9,4,6,3,5,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    QuickSort2(arr, 0, sz - 1);
    PrintfArray(&arr, sz);
    printf("\n");
  }

  void QuickSortTest3()
  {
    int arr[] = { 9,4,6,3,5,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    QuickSort3(arr, 0, sz - 1);
    PrintfArray(&arr, sz);
    printf("\n");
  }

  void QuickSortNonRTest()
  {
    int arr[] = { 9,4,6,3,5,1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    QuickSortNonR(arr, 0, sz - 1);
    PrintfArray(&arr, sz);
    printf("\n");
  }



  int main()
  {
    BubbleSortTest();
    QuickSortTest1();
    QuickSortTest2();
    QuickSortTest3();
    QuickSortNonRTest();
  }
