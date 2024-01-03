#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

void QInit(Qu* pq)// 初始化队列
{
  assert(pq);
  pq->head = pq->tail = NULL;
  pq->size=0;
}
void QDestroy(Qu* pq)// 销毁队列
{
  assert(pq);
  QNode* cur = pq->head;
  while (cur)
  {
    QNode* next = cur->next;
    free(cur);
    cur = next;
  }
  pq->head = NULL;
  pq->tail = NULL;
  pq->size = 0;
}

void QPush(Qu* pq, QDataType x)// 向队列中添加元素
{
  assert(pq);
  QNode* newNode = (QNode*)malloc(sizeof(QNode));
  if (newNode == NULL)
  {
    perror("malloc fail");
    exit(-1);
  }
  newNode->val = x;
  newNode->next = NULL;
  if (pq->tail == NULL)
  {
    pq->head = pq->tail = newNode;
  }
  else
  {
    pq->tail->next = newNode;
    pq->tail = newNode;
  }
  pq->size++;
}


void QPop(Qu* pq)// 从队列中移除元素
{
  assert(pq);
  assert(pq->head);
  QNode* Del = pq->head;
  pq->head = pq->head->next;
  free(Del);
  if (pq->head == NULL)
  {
    pq->tail = NULL;
  }
  pq->size--;
}

QDataType QFront(Qu* pq)// 获取队列头部元素
{
  assert(pq);
  assert(pq->head);
  return pq->head->val;
}
QDataType QBack(Qu* pq)// 获取队列尾部元素
{
  assert(pq);
  assert(pq->tail);
  return pq->tail->val;
}


bool qEmpty(Qu* pq)// 检查队列是否为空
{
  assert(pq);
  return pq->tail == NULL;
}
int qsize(Qu* pq) // 获取队列的大小
{
  return pq->size;
}
