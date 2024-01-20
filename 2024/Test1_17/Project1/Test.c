#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"


void Test1()
{
  int arr[] = { 2,4,6,3,5,1 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  InserSort(&arr, sz);
  PrintfArray(&arr, sz);
  printf("\n");
}


void Test2()
{
  int arr[] = { 2,4,6,3,5,1 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  BubbleSort(&arr, sz);
  PrintfArray(&arr, sz);
  printf("\n");
}


void Test3()
{
  int arr[] = { 2,4,6,3,5,1 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  ShellSort(&arr, sz);
  PrintfArray(&arr, sz);
  printf("\n");
}


void Test4()
{
  int arr[] = { 2,4,6,3,5,1 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  SelectSort(&arr, sz);
  PrintfArray(&arr, sz);
  printf("\n");
}

void Test5()
{
  int arr[] = { 2,4,6,3,5,1,4,56,6 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  QuickSortNonR(arr,0,sz-1);
  PrintfArray(arr, sz);
  printf("\n");
}

void Test6()
{
  int arr[] = { 2,4,6,3,5,1,4,56,6 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  MergeSort(arr, sz);
  PrintfArray(arr, sz);
  printf("\n");
}

void Test7()
{
  int arr[] = { 2,4,6,3,5,1,4,56,6 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  MergeSortNonR(arr, sz);
  PrintfArray(arr, sz);
  printf("\n");
}

void Test8()
{
  int arr[] = { 2,4,6,3,5,1,4,56,6 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  CountSort(arr, sz);
  PrintfArray(arr, sz);
  printf("\n");
}

void Test9()
{
  int arr[] = { 2,4,6,3,5,1,4,56,6 };
  int sz = sizeof(arr) / sizeof(arr[0]);
  HeapSort(arr, sz);
  PrintfArray(arr, sz);
  printf("\n");
}

int main()
{
  Test6();
  Test7();
  Test8();
  Test9();
}
