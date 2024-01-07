#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

// ��ʼ����
void HeapInit(Hp* hp)
{
  assert(hp);  // ȷ����ָ����Ч
  hp->a = NULL;  // ������ָ���ÿ�
  hp->size = 0;  // ��ʼ���Ѵ�СΪ0
  hp->capacity = 0;  // ��ʼ��������Ϊ0
}

// ���ٶ�
void HeapDestroy(Hp* hp)
{
  assert(hp);  // ȷ����ָ����Ч
  free(hp->a);  // �ͷŶ������ڴ�
  hp->a = NULL;  // ��������ָ���ÿ�
  hp->size = hp->capacity = 0;  // ���öѴ�С������Ϊ0
}

// ��������Ԫ�ص�ֵ
void Swap(HPDataType* p1, HPDataType* p2)
{
  HPDataType tmp = 0;  // ��ʱ�������ڽ���
  tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

// �ϸ�����
void UpAdd(HPDataType* a, HPDataType child)
{
  int parent = (child - 1) / 2;  // �ҵ����ڵ�
  while (child > 0)
  {
    if (a[child] < a[parent])  // ����ӽڵ�С�ڸ��ڵ�
    {
      Swap(&a[child], &a[parent]);  // ��������
      child = parent;  // �����ӽڵ�͸��ڵ��λ��
      parent = (child - 1) / 2;
    }
    else
    {
      break;  // �������Ҫ����������ֹѭ��
    }
  }
}

// ����в���Ԫ��
void HeapPush(Hp* hp, HPDataType x)
{
  assert(hp);  // ȷ����ָ����Ч
  if (hp->size == hp->capacity)
  {
    // �������������������
    int newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
    HPDataType* tmp = (HPDataType*)realloc(hp->a, sizeof(HPDataType) * newcapacity);
    if (tmp == NULL)
    {
      perror("realloc fail");  // �ڴ����ʧ��
      exit(-1);
    }
    hp->a = tmp;
    hp->capacity = newcapacity;
  }
  hp->a[hp->size] = x;  // ����Ԫ��
  hp->size++;  // �Ѵ�С����
  UpAdd(hp->a, hp->size - 1);  // �ϸ�����
}


void DnAdd(HPDataType* a, HPDataType parent, int size)
{
  int child = parent * 2 + 1;  // �ҵ����ӽڵ�
  while (child < size)
  {
    if (child + 1 < size && a[child + 1] < a[child])  //������ӽڵ��Ƿ����,�Լ��Ƚ����������ӽڵ��ֵ
    {
      child++;  // ѡ���С���ӽڵ�
    }
    if (a[child] < a[parent])
    {
      Swap(&a[child], &a[parent]);  // �������ӽڵ�
      parent = child;  // ���¸��ӽڵ��λ��
      child = parent * 2 + 1;
    }
    else
    {
      break;  // �������Ҫ����������ֹѭ��
    }
  }
}

// �Ӷ��е���Ԫ��
void HeapPop(Hp* hp)
{
  assert(hp);  // ȷ����ָ����Ч
  assert(hp->size > 0);  // ȷ���ѷǿ�
  Swap(&hp->a[0], &hp->a[hp->size - 1]);  // �����Ѷ��Ͷѵ�Ԫ��
  hp->size--;  // ��С�Ѵ�С
  DnAdd(hp->a, 0, hp->size);  // �³�����
}

// ��ȡ�Ѷ�Ԫ��
HPDataType HeapTop(Hp* hp)
{
  assert(hp);  // ȷ����ָ����Ч
  assert(hp->size > 0);  // ȷ���ѷǿ�
  return hp->a[0];  // ���ضѶ�Ԫ��
}

// ��ȡ�ѵĴ�С
size_t HeapSize(Hp* hp)
{
  assert(hp);  // ȷ����ָ����Ч
  return hp->size;  // ���ضѴ�С
}

// �ж϶��Ƿ�Ϊ��
bool HeapEmpty(Hp* hp)
{
  assert(hp);  // ȷ����ָ����Ч
  return hp->size == 0;  // �ж϶��Ƿ�Ϊ��
}
