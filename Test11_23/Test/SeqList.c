#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SLInit(SL *psl)//初始化
{
  assert(psl);
  psl->a = NULL;
  psl->size = 0;
  psl->capacity = 0;
}

void SLDestroy(SL* psl)//销毁
{
  assert(psl);
  if (psl =! NULL)
  {
    psl->a = NULL;
    psl->size = 0;
    psl->capacity = 0;
  }
}

void SLPrint(SL* psl)
{
  assert(psl);
  for(int i=0;i<psl->size;i++)
  {
    printf("%d ", psl->a[i]);
  }
  printf("\n");
}

void CheckSLCapacity(SL *psl)
{
  assert(psl);
  if (psl->size == psl->capacity)
  {
    int Newcapacity = psl->capacity = 0 ? 4 : psl->capacity * 2;
    SLDateType* tmp = realloc(psl->a, sizeof(SLDateType) * Newcapacity);
    if (tmp == NULL)
    {
      perror("realloc fail");
      return;
    }
    psl->a = tmp;
    psl->capacity = Newcapacity;
  }
}


void SLPushBack(SL* psl, SLDateType x)//尾插
{
  assert(psl);
  CheckSLCapacity(psl);
  psl->a[psl->size++]=x;
}

void SLPushFront(SL* psl, SLDateType x)//头插
{
  assert(psl);
  CheckSLCapacity(psl);
  int end = psl->size - 1;
  while (end>=0)
  {
    psl->a[end + 1] = psl->a[end];
    end--;
  }
  psl->a[0] = x;
  psl->size++;
}

void SLPopBack(SL* psl)//尾删
{
  assert(&psl);
  assert(psl->size > 0);
  psl->size--;
}


void SLPopFront(SL* psl)//头删
{
  assert(&psl);
  assert(psl->size > 0);
  int begin = 1;
  while (begin < psl->size)
  {
    psl->a[begin-1] = psl->a[begin];
    begin++;
  }
  psl->size--;
}

void SLErase(SL* psl, int pos)//任意位置删除
{
  assert(&psl);
  assert(pos >= 0 && pos < psl->size);
  int begin = pos+1;
  while (begin < psl->size)
  {
    psl->a[begin - 1] = psl->a[begin];
    begin++;
  }
  psl->size--;

}

void SLInsert(SL* psl, int pos, SLDateType x)//任意位置插入
{
  assert(psl);
  assert(pos >= 0 && pos < psl->size);
  CheckSLCapacity(psl);
  int end = psl->size - 1;
  while (end >= pos)
  {
    psl->a[end + 1] = psl->a[end];
    end--;
  }
  psl->a[pos] = x;
  psl->size++;
}

