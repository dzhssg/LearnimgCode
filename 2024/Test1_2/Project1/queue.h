#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int QDataType;

typedef struct queueNode
{
  struct queueNode* next;
  QDataType val;
}QNode;

typedef struct queue
{
  QNode* head;
  QNode* tail;
  int size;
}Qu;

void QInit(Qu* pq); // 初始化队列
void QDestroy (Qu* pq); // 销毁队列

void QPush(Qu* pq, QDataType x);// 向队列中添加元素
void QPop(Qu* pq);// 从队列中移除元素


QDataType QFront(Qu* pq);// 获取队列头部元素
QDataType QBack(Qu* pq);// 获取队列尾部元素

bool qEmpty(Qu* pq);// 检查队列是否为空
int qsize(Qu* pq); // 获取队列的大小
