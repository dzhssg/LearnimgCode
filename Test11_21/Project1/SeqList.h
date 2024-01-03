#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"Contact.h"

typedef CInfo SLDataType; 
//typedef int SLDataType;
//把顺序表的数据结构改为通讯录的结构体类型

typedef struct SeqList
{
  SLDataType* a;
  int size;       // 有效数据
  int capacity;   // 空间容量
}SL;

<<<<<<< HEAD

=======
<<<<<<< HEAD:Test11_21/Project1/SeqList.h
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
void SLInit(SL* ps);    // 数据表初始化
void SLDestroy(SL* ps); // 数据表销毁

void SLPushFront(SL* ps, SLDataType x); // 头插
void SLPushBack(SL* ps, SLDataType x);  // 尾插
<<<<<<< HEAD

=======
=======
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
void SLInit(SL *ps);    // 数据表初始化
void SLDestroy(SL *ps); // 数据表销毁

void SLPushFront(SL* ps, SLDataType x); // 头插
void SLPushBack(SL *ps ,SLDataType x);  // 尾插
>>>>>>> 67b5175fedd367bd2b976d8bf838195205f59a27:Test11_19/Test/SeqList.h


void SLPopFront(SL* ps);  // 头删
void SLPopBack(SL* ps);   // 尾删

void SLCheckCapacity(SL* ps); // 检查内存是否足够，不够就扩容。
void SLprintf(SL* ps);  // 数据表打印

void SLInsert(SL* ps, int pos, SLDataType x);  //任意下标位置的插入
void SLErase(SL* ps, int pos);  //任意下标位置的删除