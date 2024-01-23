#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
// �ѵ��������Ͷ���
typedef int HPDataType;

// �ѵĽṹ�嶨��
typedef struct Heap
{
  HPDataType* a;  // ָ��������ָ��
  size_t size;    // �ѵ�ǰ�Ĵ�С
  int capacity;   // �ѵ��������
} Hp;

// ������������
void HeapInit(Hp* hp);  // ��ʼ����

void HeapDestroy(Hp* hp);  // ���ٶ�

void HeapPush(Hp* hp, HPDataType x);  // ����в���Ԫ��

void HeapPop(Hp* hp);  // �Ӷ��е���Ԫ��

HPDataType HeapTop(Hp* hp);  // ��ȡ�Ѷ�Ԫ��

size_t HeapSize(Hp* hp);  // ��ȡ�ѵĴ�С

bool HeapEmpty(Hp* hp);  // �ж϶��Ƿ�Ϊ��
