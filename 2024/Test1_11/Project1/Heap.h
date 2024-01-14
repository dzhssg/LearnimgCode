#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>

typedef int HPDataType;


typedef struct Heap
{
  HPDataType* a;  // ָ��������ָ��
  size_t size;    // �ѵ�ǰ�Ĵ�С
  int capacity;   // �ѵ��������
} Hp;


void HeapInit(Hp* hp);  // ��ʼ����

void HeapDestroy(Hp* hp);  // ���ٶ�

void HeapPush(Hp* hp, HPDataType x);  // ����в���Ԫ��

void HeapPop(Hp* hp);  // �Ӷ��е���Ԫ��

HPDataType HeapTop(Hp* hp);  // ��ȡ�Ѷ�Ԫ��

size_t HeapSize(Hp* hp);  // ��ȡ�ѵĴ�С

bool HeapEmpty(Hp* hp);  // �ж϶��Ƿ�Ϊ��

void UpAdd(HPDataType* a, HPDataType child);

void DnAdd(HPDataType* a, HPDataType parent, int size);

void Swap(HPDataType* p1, HPDataType* p2);
