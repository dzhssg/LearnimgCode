#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"
#include"Heap.h"

void PrintfArray(int* a, int n)  //数组打印
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void swap(int* p1, int* p2)
{
  int tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

// 选择排序
void SelectSort(int* a, int n)
{
  int begin = 0;
  int end = n - 1;

  while (begin < end)
  {
    int min = end;
    int max = begin;
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
    if (begin == max)
    {
      max = min;
    }
    swap(&a[begin], &a[min]);
    swap(&a[end], &a[max]);
    begin++;
    end--;
  }
}
 
void AdjustDown(int* a, int size, int parent)//堆的向下调整法
{
  int child = parent * 2 + 1;

  while (child < size)
  {
    // 假设左孩子小，如果解设错了，更新一下
    if (child + 1 < size && a[child + 1] > a[child])
    {
      ++child;
    }

    if (a[child] > a[parent])
    {
      swap(&a[child], &a[parent]);
      parent = child;
      child = parent * 2 + 1;
    }
    else
    {
      break;
    }
  }
}


void HeapSort(int* a, int n)//堆排序
{
  for (int i = (n - 1 - 1) / 2; i >= 0; --i)
  {
    AdjustDown(a, n, i);
  }

  int end = n - 1;
  while (end > 0)
  {
    swap(&a[0], &a[end]);
    AdjustDown(a, end, 0);
    --end;
  }
}

void BubbleSort(int* a, int n)
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


int GetMidi(int* a, int begin, int end)//取中值
{
  int midi = (begin + end) / 2;
  if (a[begin] < a[midi])
  {
    if (a[midi] < a[end])
    {
      return midi;
    }
    else if (a[begin] > a[end])
    {
      return begin;
    }
    else
    {
      return end;
    }
  }
  else//a[begin] > a[midi]
  {
    if (a[midi] > a[end])
    {
      return midi;
    }
    else if (a[begin] < a[end])
    {
      return begin;
    }
    else
    {
      return end;
    }
  }
}

int PartSort1(int* a, int begin, int end)//快速排序hoare版本实现，非常复杂
{
  int midi = GetMidi(a, begin, end);
  swap(&a[begin], &a[midi]);
  int key = begin;
  int left = begin;
  int right = end;
  while (left < right)
  {
    while (left < right && a[right] >= a[key])
    {
      --right;
    }
    while (left < right && a[left] <= a[key])
    {
      ++left;
    }
    swap(&a[left], &a[right]);
  }

  swap(&a[left], &a[key]);
  return left;
}

int PartSort2(int* a, int begin, int end)//快速排序挖坑法实现
{
  if (begin >= end)
  {
    return;
  }

  int midi = GetMidi(a, begin, end);
  swap(&a[begin], &a[midi]);

  int key = a[begin];
  int hole = begin;
  while (begin < end)
  {
    while (begin < end && a[end] >= key)
    {
      end--;
    }
    a[hole] = a[end];
    hole = end;

    while (begin < end && a[begin] <= key)
    {
      begin++;
    }
    a[hole] = a[begin];
    hole = begin;
  }
  a[hole] = key;
  return hole;
}


int PartSort3(int* a, int begin, int end)//快速排序指针法实现
{
  int midi = GetMidi(a, begin, end);
  swap(&a[begin], &a[midi]);

  int key = begin;
  int prev = begin;
  int cur = prev + 1;
  while (cur <= end)
  {
    if (a[cur] < a[key] && prev++ != cur)
    {
      swap(&a[prev], &a[cur]);
    }
    cur++;
  }
  swap(&a[key], &a[prev]);
  key = prev;

  return key;
}

void QuickSort1(int* a, int begin, int end)// 快速排序hoare版本
{
  if (begin >= end)
  {
    return;
  }
  int key = PartSort1(a, begin, end);
  QuickSort1(a, begin, key - 1);
  QuickSort1(a, key + 1, end);
}

void QuickSort2(int* a, int begin, int end)// 快速排序挖坑法
{
  if (begin >= end)
  {
    return;
  }
  int key = PartSort2(a, begin, end);
  QuickSort2(a, begin, key - 1);
  QuickSort2(a, key + 1, end);
}

void QuickSort3(int* a, int begin, int end)//快速排序前后指针法
{
  if (begin >= end)
  {
    return;
  }
  int key = PartSort3(a, begin, end);
  QuickSort3(a, begin, key - 1);
  QuickSort3(a, key + 1, end);
}

void QuickSortNonR(int* a, int begin, int end)//快速排序（非递归）
{
  Hp s;
  HeapInit(&s);
  HeapPush(&s, end);
  HeapPush(&s, begin);

  while (!HeapEmpty(&s))
  {
    int left = HeapTop(&s);
    HeapPop(&s);
    int right = HeapTop(&s);
    HeapPop(&s);

    int key = PartSort3(a, left, right);

    if (left < key)
    {
      HeapPush(&s, key - 1);
      HeapPush(&s, left);
    }
    if (key + 1 < right)
    {
      HeapPush(&s, right);
      HeapPush(&s, key + 1);
    }
  }
  HeapDestroy(&s);
}
