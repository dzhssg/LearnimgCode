#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDateType;

typedef struct sqlist
{
  SLDateType* a;
  int size;
  int capacity;
}SL;

void SLInit(SL *);//初始化

void SLDestroy(SL *psl);//销毁

void SLPushBack(SL *psl, SLDateType x);//尾插

void SLPushFront(SL *psl, SLDateType x);//头插

void SLPopBack(SL *psl);//尾删

void SLPopFront(SL *psl);//头删

void CheckSLCapacity(SL* psl);//检查内存

void SLPrint(SL* psl);//打印

void SLErase(SL* psl,int pos);//任意位置删除

void SLInsert(SL* psl, int pos, SLDateType x);//任意位置插入
