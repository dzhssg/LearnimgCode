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

// 升序
void HeapSort(int* a, int n)//堆排序
{
  // O(N)
  // 建大堆
  for (int i = (n - 1 - 1) / 2; i >= 0; --i)
  {
    AdjustDown(a, n, i);
  }

  // O(N*logN)
  int end = n - 1;
  while (end > 0)
  {
    swap(&a[0], &a[end]);
    AdjustDown(a, end, 0);
    --end;
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

void QuickSort(int* a, int begin, int end)//快速排序（递归）
{
  if (begin >= end)
  {
    return;
  }
  int key = PartSort1(a,begin,end);
  QuickSort(a, begin, key - 1);
  QuickSort(a, key + 1, end);
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


void _MergeSort(int* a, int begin, int end, int* tmp)//归并排序实现（递归）
{
  if (begin >= end)
    return;

  int mid = (begin + end) / 2;
  // [begin, mid][mid+1, end]
  _MergeSort(a, begin, mid, tmp);
  _MergeSort(a, mid + 1, end, tmp);
  int begin1 = begin, end1 = mid;
  int begin2 = mid + 1, end2 = end;
  int i = begin;
  while (begin1 <= end1 && begin2 <= end2)
  {
    if (a[begin1] < a[begin2])
    {
      tmp[i++] = a[begin1++];
    }
    else
    {
      tmp[i++] = a[begin2++];
    }
  }

  while (begin1 <= end1)
  {
    tmp[i++] = a[begin1++];
  }

  while (begin2 <= end2)
  {
    tmp[i++] = a[begin2++];
  }

  memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}

void MergeSort(int* a, int n)//归并排序
{
  int* tmp = (int*)malloc(sizeof(int)*n);
  if (tmp == NULL)
  {
    perror("malloc fail");
    return;
  }

  _MergeSort(a, 0, n - 1, tmp);
  free(tmp);
}

void MergeSortNonR(int* a, int n)//归并排序
{
  int* tmp = (int*)malloc(sizeof(int) * n);
  if (tmp == NULL)
  {
    perror("malloc fail");
    exit(-1);
  }

  int gap = 1;
  while (gap < n)
  {

    for (int i = 0; i < n; i += 2*gap)
    {
      int begin1 = i;
      int end1 = i + gap - 1;
      int begin2 = i + gap;
      int end2 = i + 2 * gap - 1;
    
      if (end1 >= n || begin2 >= n)
        break;
      if (end2 >= n)
        end2 = n - 1;

      int j = begin1;
      while (begin1 <= end1 && begin2 <= end2)
      {
        if (a[begin1] < a[begin2])
        {
          tmp[j++] = a[begin1++];
        }
        else
        {
          tmp[j++] = a[begin2++];
        }
      }

      while (begin1 <= end1)
      {
        tmp[j++] = a[begin1++];
      }
      while (begin2 <= end2)
      {
        tmp[j++] = a[begin2++];
      }

      memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
    }
    gap *= 2;
  }
  free(tmp);
}


void CountSort(int* a, int n)//计数排序
{
  int min = a[0];
  int max = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
    if (a[i] < min)
    {
      min = a[i];
    }
  }

  int range = max - min + 1;
  int* count = (int*)calloc(range, sizeof(int));
  if (count == NULL)
  {
    printf("calloc fail\n");
    return;
  }

  for (int i = 0; i < n; i++)
  {
    count[a[i]-min]++;
  }

  int i = 0;
  for (int j = 0; j < range; j++)
  {
    while (count[j]--)
    {
      a[i++] = j + min;
    }
  }
}


void PrintfArray(int* a, int n)  //数组打印
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
