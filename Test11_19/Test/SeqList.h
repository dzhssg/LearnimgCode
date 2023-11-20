#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

typedef struct Seqlist
{
  SLDataType* a;
  int size;       // 有效数据
  int capacity;   // 空间容量
}SL;

void SLInit(SL *ps);    // 数据表初始化
void SLDestroy(SL *ps); // 数据表销毁
void SLPushBack(SL *ps ,SLDataType x);  // 头插
void SLPushFront(SL* ps, SLDataType x); // 尾插
void SLPopBack(SL* ps);   // 头删
void SLPopFront(SL* ps);  // 尾删

void SLCheckCapacity(SL* ps); // 检查内存是否足够，不够就扩容。
void SLprintf(SL* ps);  // 数据表打印

void SLInsert(SL* ps, int pos, SLDataType x);  //任意下标位置的插入
void SLErase(SL* ps, int pos);  //任意下标位置的删除
