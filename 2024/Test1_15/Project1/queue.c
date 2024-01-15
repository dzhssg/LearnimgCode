#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

// 初始化队列
void QInit(Queue* pq)
{
  assert(pq); // 断言队列指针非空
  pq->phead = pq->ptail = NULL; // 将头指针和尾指针都设为NULL
  pq->size = 0; // 将队列大小设置为0
}

// 销毁队列
void QDestroy(Queue* pq)
{
  assert(pq); // 断言队列指针非空
  QNode* cur = pq->phead;
  while (cur)
  {
    QNode* next = cur->next; // 保存下一个节点
    free(cur); // 释放当前节点
    cur = next; // 移动到下一个节点
  }
  pq->phead = NULL; // 将头指针设为NULL
  pq->ptail = NULL; // 将尾指针设为NULL
  pq->size = 0; // 将队列大小设置为0
}

// 向队列中添加元素
void QPush(Queue* pq, QDataType x)
{
  assert(pq); // 断言队列指针非空
  QNode* newNode = (QNode*)malloc(sizeof(QNode)); // 分配新节点内存
  if (newNode == NULL)
  {
    perror("malloc fail"); // 内存分配失败处理
    exit(-1);
  }

  newNode->val = x; // 设置新节点的值
  newNode->next = NULL; // 新节点的下一个节点为NULL
  if (pq->ptail == NULL) // 如果队列为空
  {
    pq->phead = pq->ptail = newNode; // 队列头尾都指向新节点
  }
  else
  {
    pq->ptail->next = newNode; // 将新节点接到队列尾部
    pq->ptail = newNode; // 更新尾指针
  }
  pq->size++; // 队列大小增加
}

// 从队列中移除元素
void QPop(Queue* pq)
{
  assert(pq); // 断言队列指针非空
  assert(pq->phead); // 断言队列不为空
  QNode* Del = pq->phead; // 保存要删除的节点
  pq->phead = pq->phead->next; // 更新头指针
  free(Del); // 释放节点内存
  if (pq->phead == NULL) // 如果队列变空
  {
    pq->ptail = NULL; // 更新尾指针
  }
  pq->size--; // 队列大小减少
}

// 获取队列头部元素的值
QDataType QueueFront(Queue* pq)
{
  assert(pq); // 断言队列指针非空
  assert(pq->phead); // 断言队列不为空
  return pq->phead->val; // 返回头部元素的值
}

// 获取队列尾部元素的值
QDataType QueueBack(Queue* pq)
{
  assert(pq); // 断言队列指针非空
  assert(pq->ptail); // 断言队列不为空
  return pq->ptail->val; // 返回尾部元素的值
}

// 检查队列是否为空
bool QueueEmpty(Queue* pq)
{
  assert(pq); // 断言队列指针非空
  return pq->phead == NULL; // 如果头指针为NULL，则队列为空
}

// 获取队列的大小
int QueueSize(Queue* pq)
{
  return pq->size; // 返回队列的大小
}
