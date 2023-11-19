#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLCheckCapacity(SL* ps)  // ����ڴ��Ƿ��㹻�����������ݡ�
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

void SLprintf(SL* ps)   // ���ݱ��ӡ
{
  for (int i = 0; i < ps->size; i++)
  {
    printf("%d ", ps->a[i]);
  }
  printf("\n");
}


void SLInit(SL *ps)     // ���ݱ��ʼ��
{
  assert(ps);
  ps->a = NULL;
  ps->size = 0;
  ps->capacity = 0;
}

void SLDestroy(SL* ps)  // ���ݱ�����
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

void SLPushBack(SL* ps, SLDataType x)   // ͷ��
{
  assert(ps);
  SLCheckCapacity(ps);
  ps->a[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)  // β��
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

void SLPopBack(SL* ps)  // ͷɾ
{
  assert(ps);
  assert(ps->size>0);
  ps->size--;
}

void SLPopFront(SL* ps) // βɾ
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

// pos���±�
void SLInsert(SL* ps, int pos, SLDataType x)  // �����±�λ�õĲ���
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
void SLErase(SL* ps, int pos)    // �����±�λ�õ�ɾ��
{
  assert(ps);
  assert(pos >= 0 && pos < ps->size);   // ����ɾ�������õ���ps->size,ps->size�����±�Ļ��൱���±�����һ��λ��+1
  int begin = pos + 1;
  while (begin < ps->size)
  {
    ps->a[begin - 1] = ps->a[begin];
    begin++;
  }
  ps->size--;
}
