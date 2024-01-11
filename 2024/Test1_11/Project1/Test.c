#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"


void HeapSort(int* a, int n)
{
  // 构建初始大顶堆
  for (int i = (n / 2) - 1; i >= 0; i--)
  {
    DnAdd(a, i, n);
  }
  
  // 从堆中逐个移除元素并进行排序
  for (int end = n - 1; end > 0; end--)
  {
    Swap(&a[0], &a[end]);  // 将最大的元素（堆顶）移动到数组的末尾
    DnAdd(a, 0, end);  // 对剩余的堆进行向下调整
  }
}


void CreateNDate()
{
  // 造数据
  int n = 10000000;
  srand(time(0));
  const char* file = "data.txt";
  FILE* fin = fopen(file, "w");
  if (fin == NULL)
  {
    perror("fopen error");
    return;
  }

  for (int i = 0; i < n; ++i)
  {
    int x = (rand() + i) % 10000000;
    fprintf(fin, "%d\n", x);
  }

  fclose(fin);
}

void PrintTopK(const char* file, int k)
{
  FILE* fout = fopen(file, "r");
  if (fout == NULL)
  {
    perror("fopen error");
    return;
  }

  // 建一个k个数小堆
  int* minheap = (int*)malloc(sizeof(int) * k);
  if (minheap == NULL)
  {
    perror("malloc error");
    return;
  }

  // 读取前k个，建小堆
  for (int i = 0; i < k; i++)
  {
    fscanf(fout, "%d", &minheap[i]);
    AdjustUp(minheap, i);
  }

  int x = 0;
  while (fscanf(fout, "%d", &x) != EOF)
  {
    if (x > minheap[0])
    {
      minheap[0] = x;
      AdjustDown(minheap, k, 0);
    }
  }

  for (int i = 0; i < k; i++)
  {
    printf("%d ", minheap[i]);
  }
  printf("\n");

  free(minheap);
  fclose(fout);
}
int main()
{
  //int arr[] = { 8,6,4,2,0,9,4 };
  //HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
  //for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  //{
  //  printf("%d ", arr[i]);
  //}

}
