#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

// 初始化堆
void HeapInit(Hp* hp)
{
  assert(hp);  // 确保堆指针有效
  hp->a = NULL;  // 堆数组指针置空
  hp->size = 0;  // 初始化堆大小为0
  hp->capacity = 0;  // 初始化堆容量为0
}

// 销毁堆
void HeapDestroy(Hp* hp)
{
  assert(hp);  // 确保堆指针有效
  free(hp->a);  // 释放堆数组内存
  hp->a = NULL;  // 将堆数组指针置空
  hp->size = hp->capacity = 0;  // 重置堆大小和容量为0
}

// 交换两个元素的值
void Swap(HPDataType* p1, HPDataType* p2)
{
  HPDataType tmp = 0;  // 临时变量用于交换
  tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

// 上浮调整
void UpAdd(HPDataType* a, HPDataType child)
{
  int parent = (child - 1) / 2;  // 找到父节点
  while (child > 0)
  {
    if (a[child] < a[parent])  // 如果子节点小于父节点
    {
      Swap(&a[child], &a[parent]);  // 交换两者
      child = parent;  // 更新子节点和父节点的位置
      parent = (child - 1) / 2;
    }
    else
    {
      break;  // 如果不需要交换，则终止循环
    }
  }
}

// 向堆中插入元素
void HeapPush(Hp* hp, HPDataType x)
{
  assert(hp);  // 确保堆指针有效
  if (hp->size == hp->capacity)
  {
    // 如果堆已满，扩大容量
    int newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
    HPDataType* tmp = (HPDataType*)realloc(hp->a, sizeof(HPDataType) * newcapacity);
    if (tmp == NULL)
    {
      perror("realloc fail");  // 内存分配失败
      exit(-1);
    }
    hp->a = tmp;
    hp->capacity = newcapacity;
  }
  hp->a[hp->size] = x;  // 插入元素
  hp->size++;  // 堆大小增加
  UpAdd(hp->a, hp->size - 1);  // 上浮调整
}


void DnAdd(HPDataType* a, HPDataType parent, int size)
{
  int child = parent * 2 + 1;  // 找到左子节点
  while (child < size)
  {
    if (child + 1 < size && a[child + 1] < a[child])  //检查右子节点是否存在,以及比较左右两个子节点的值
    {
      child++;  // 选择较小的子节点
    }
    if (a[child] < a[parent])
    {
      Swap(&a[child], &a[parent]);  // 交换父子节点
      parent = child;  // 更新父子节点的位置
      child = parent * 2 + 1;
    }
    else
    {
      break;  // 如果不需要交换，则终止循环
    }
  }
}

// 从堆中弹出元素
void HeapPop(Hp* hp)
{
  assert(hp);  // 确保堆指针有效
  assert(hp->size > 0);  // 确保堆非空
  Swap(&hp->a[0], &hp->a[hp->size - 1]);  // 交换堆顶和堆底元素
  hp->size--;  // 减小堆大小
  DnAdd(hp->a, 0, hp->size);  // 下沉调整
}

// 获取堆顶元素
HPDataType HeapTop(Hp* hp)
{
  assert(hp);  // 确保堆指针有效
  assert(hp->size > 0);  // 确保堆非空
  return hp->a[0];  // 返回堆顶元素
}

// 获取堆的大小
size_t HeapSize(Hp* hp)
{
  assert(hp);  // 确保堆指针有效
  return hp->size;  // 返回堆大小
}

// 判断堆是否为空
bool HeapEmpty(Hp* hp)
{
  assert(hp);  // 确保堆指针有效
  return hp->size == 0;  // 判断堆是否为空
}
