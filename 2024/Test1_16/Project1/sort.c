#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void InserSort(int* a, int n)//插入排序O(n^2),最好情况O(n)接近有序
{
  for (int i = 0; i < n - 1; i++)
  {
    int end = i;
    int tmp = a[end + 1];
    while (end >= 0)
    {
      if (tmp < a[end])
      {
        a[end + 1] = a[end];
        end--;
      }
      else
      {
        break;
      }
    }
    a[end + 1] = tmp;
  }
}


void ShellSort(int* a, int n)//希尔排序
{

  int gap = n;
  while (gap > 1)
  {
    gap = gap / 2;
    /*gap = gap/3+1;*/
    for (int j = 0; j < gap; j++)
    {
      for (int i = j; i < n - gap; i += gap)// for(int i = j;i < n-gap; i += gap)
      {
        int end = i;
        int tmp = a[end + gap];
        while (end >= 0)
        {
          if (tmp < a[end])
          { 
            a[end + gap] = a[end];
            end -= gap;
          }
          else
          {
            break;
          }
        }
        a[end + gap] = tmp;
      }
    }
  }
}



void swap(int* p1, int* p2)
{
  int tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

void SelectSort(int* a, int n)//时间复杂度O(n^2),最好情况下O(n^2)
{
  int end = n-1;
  int begin = 0;
  while (begin < end)
  {
    int min = begin;
    int max = end;
    for (int i = begin + 1; i <= end; i++)
    {
      if (a[i] < a[min])
      {
        min = i;
      }
      if (a[i] > a[max])
      {
        max = i;
      }
    }

    swap(&a[begin], &a[min]);
    if (max == begin)
    {
      max = min;
    }
    swap(&a[end], &a[max]);

    begin++;
    end--;
  }
}  


void BubbleSort(int* a, int n)//冒泡排序O(n^2)，最好情况O(n)接近有序
{
  for (int j = 0; j < n; j++)
  {
    for (int i = 0; i < (n - 1); i++)
    {
      if (a[i] > a[i + 1])
      {
        swap(&a[i], &a[i + 1]);
      }
    }
  }
}





void PrintfArray(int* a, int n)//数组打印
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
