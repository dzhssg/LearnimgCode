#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

// ��ʼ������
void QInit(Queue* pq)
{
  assert(pq); // ���Զ���ָ��ǿ�
  pq->phead = pq->ptail = NULL; // ��ͷָ���βָ�붼��ΪNULL
  pq->size = 0; // �����д�С����Ϊ0
}

// ���ٶ���
void QDestroy(Queue* pq)
{
  assert(pq); // ���Զ���ָ��ǿ�
  QNode* cur = pq->phead;
  while (cur)
  {
    QNode* next = cur->next; // ������һ���ڵ�
    free(cur); // �ͷŵ�ǰ�ڵ�
    cur = next; // �ƶ�����һ���ڵ�
  }
  pq->phead = NULL; // ��ͷָ����ΪNULL
  pq->ptail = NULL; // ��βָ����ΪNULL
  pq->size = 0; // �����д�С����Ϊ0
}

// ����������Ԫ��
void QPush(Queue* pq, QDataType x)
{
  assert(pq); // ���Զ���ָ��ǿ�
  QNode* newNode = (QNode*)malloc(sizeof(QNode)); // �����½ڵ��ڴ�
  if (newNode == NULL)
  {
    perror("malloc fail"); // �ڴ����ʧ�ܴ���
    exit(-1);
  }

  newNode->val = x; // �����½ڵ��ֵ
  newNode->next = NULL; // �½ڵ����һ���ڵ�ΪNULL
  if (pq->ptail == NULL) // �������Ϊ��
  {
    pq->phead = pq->ptail = newNode; // ����ͷβ��ָ���½ڵ�
  }
  else
  {
    pq->ptail->next = newNode; // ���½ڵ�ӵ�����β��
    pq->ptail = newNode; // ����βָ��
  }
  pq->size++; // ���д�С����
}

// �Ӷ������Ƴ�Ԫ��
void QPop(Queue* pq)
{
  assert(pq); // ���Զ���ָ��ǿ�
  assert(pq->phead); // ���Զ��в�Ϊ��
  QNode* Del = pq->phead; // ����Ҫɾ���Ľڵ�
  pq->phead = pq->phead->next; // ����ͷָ��
  free(Del); // �ͷŽڵ��ڴ�
  if (pq->phead == NULL) // ������б��
  {
    pq->ptail = NULL; // ����βָ��
  }
  pq->size--; // ���д�С����
}

// ��ȡ����ͷ��Ԫ�ص�ֵ
QDataType QueueFront(Queue* pq)
{
  assert(pq); // ���Զ���ָ��ǿ�
  assert(pq->phead); // ���Զ��в�Ϊ��
  return pq->phead->val; // ����ͷ��Ԫ�ص�ֵ
}

// ��ȡ����β��Ԫ�ص�ֵ
QDataType QueueBack(Queue* pq)
{
  assert(pq); // ���Զ���ָ��ǿ�
  assert(pq->ptail); // ���Զ��в�Ϊ��
  return pq->ptail->val; // ����β��Ԫ�ص�ֵ
}

// �������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq)
{
  assert(pq); // ���Զ���ָ��ǿ�
  return pq->phead == NULL; // ���ͷָ��ΪNULL�������Ϊ��
}

// ��ȡ���еĴ�С
int queueSize(Queue* pq)
{
  return pq->size; // ���ض��еĴ�С
}
