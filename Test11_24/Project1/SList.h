#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLNDataType;
typedef struct SListNode
{
  SLNDataType val;
  struct SListNode* next;
 
   //这里只是指针，不是结构体

}SLNode;

void SLTPrint(SLNode* pphead); //打印单链表

void SLTPushBack(SLNode** pphead, SLNDataType x); //尾插

void SLTPushFront(SLNode** pphead, SLNDataType x); //头插

void SLTPopBack(SLNode** pphead);  //尾删

void SLTPopFront(SLNode** pphead); //头删

void * SLTInster(SLNode** phead,SLNode* pos, SLNDataType x); //指定位置前面插入

void * SLTEraseAfter(SLNode* pos); //指定位置后面删除

void SLTDestroy(SLNode** phead); //销毁单链表

SLNode* SLTFind(SLNode** pphead, SLNDataType x); //pos的查找函数



