#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"


void HeapSort(int* a, int n)
{
  // 构建初始大顶堆
  for (int i = (n - 1 - 1) / 2; i >= 0; --i)
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



void CreateNData()
{

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

  // 建一个k个数的最小堆
  int* minheap = (int*)malloc(sizeof(int) * k);
  if (minheap == NULL)
  {
    perror("malloc error");
    fclose(fout); // 记得关闭文件指针
    return;
  }

  // 读取前k个数，以构建最小堆
  for (int i = 0; i < k; i++)
  {
    if (fscanf(fout, "%d", &minheap[i]) != 1) // 检查fscanf的返回值
    {
      perror("fscanf error");
      free(minheap);
      fclose(fout);
      return;
    }
    UpAdd(minheap, i); // 由于是读取前k个数，这里应该是UpAdd
  }

  // 遍历文件中剩余的数，维护最小堆
  int x = 0;
  while (fscanf(fout, "%d", &x) != EOF)
  {
    if (x > minheap[0]) // 只有新的数比堆顶大时，才替换并进行下沉
    {
      minheap[0] = x;
      DnAdd(minheap, 0, k); // 注意这里是对堆顶进行下沉，所以传入的应该是0
    }
  }

  // 输出结果
  HeapSort(minheap, k); // 排序最小堆，使之按照顺序输出
  for (int i = 0; i < k; i++)
  {
    printf("%d ", minheap[i]);
  }
  printf("\n");

  free(minheap); // 释放内存
  fclose(fout); // 关闭文件
}

int main()
{
	CreateNData();
	PrintTopK("Data.txt", 5);
}
