#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLCheckCapacity(SL* ps)  // 检查内存是否足够，不够就扩容。
{
    if (ps->size == ps->capacity)
    {
      int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
      SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newCapacity);
      if (tmp == NULL)
      {
        perror("realloc fail");
        return;
      }
      ps->a = tmp;
      ps->capacity = newCapacity;
    }
}

void SLprintf(SL* ps)   // 数据表打印
{
  for (int i = 0; i < ps->size; i++)
  {
    printf("%d ", ps->a[i]);
  }
  printf("\n");
}


void SLInit(SL *ps)     // 数据表初始化
{
  assert(ps);
  ps->a = NULL;
  ps->size = 0;
  ps->capacity = 0;
}

void SLDestroy(SL* ps)  // 数据表销毁
{
  assert(ps);
  if (ps->a != NULL)
  {
    free(ps->a);
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 0;
  }
}

void SLPushBack(SL* ps, SLDataType x)   // 头插
{
  assert(ps);
  SLCheckCapacity(ps);
  ps->a[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)  // 尾插
{
  assert(ps);
  SLCheckCapacity(ps);
  int end = ps->size - 1;
  while (end >= 0)
  {
    ps->a[end + 1] = ps->a[end];
    end--;
  }
  ps->a[0] = x;
  ps->size++;
}

void SLPopBack(SL* ps)  // 头删
{
  assert(ps);
  assert(ps->size>0);
  ps->size--;
}

void SLPopFront(SL* ps) // 尾删
{
  assert(ps);
  assert(ps->size>0);
  int begin = 1;
  while (begin < ps->size)
  {
    ps->a[begin - 1] = ps->a[begin];
    begin++;
  }
  ps->size--;
}

// pos是下标
void SLInsert(SL* ps, int pos, SLDataType x)  // 任意下标位置的插入
{
  assert(ps);
  assert(pos >= 0 && pos <= ps->size);
  SLCheckCapacity(ps);
  int end = ps->size - 1;
  while (end >= pos)
  {
    ps->a[end + 1] = ps->a[end];
    end--;
  }
  ps->a[pos] = x;
  ps->size++;
}
void SLErase(SL* ps, int pos)    // 任意下标位置的删除
{
  assert(ps);
  assert(pos >= 0 && pos < ps->size);   // 这里删除不能用等于ps->size,ps->size看作下标的话相当于下标的最后一个位置+1
  int begin = pos + 1;
  while (begin < ps->size)
  {
    ps->a[begin - 1] = ps->a[begin];
    begin++;
  }
  ps->size--;
}
