#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
// �������������ͷ���.

ListNode* CreateList(LTDataType x)
{
  ListNode* newNode = (ListNode*)malloc(sizeof(struct ListNode));
  if (newNode == NULL)
  {
    perror("malloc fail");
    exit(-1);
  }
  newNode->val = x;
  newNode->next = NULL;
  newNode->next = NULL;
  return newNode;
}

ListNode* ListCreate(ListNode* pHead)
{
  pHead = CreateList(-1);
  pHead->next = pHead;
  pHead->prev = pHead;
  return pHead;
}

// ˫����������

void ListDestory(ListNode* pHead)
{
  ListNode* cur = pHead->next;
  while (cur != pHead)
  {
    ListNode* next = cur->next;
    free(cur);
    cur = next;
  }

  free(pHead);
  pHead = NULL;
}

// ˫�������ӡ

void ListPrint(ListNode* pHead)
{
  assert(pHead);
  ListNode* cur = pHead->next;
  printf("�ڱ�λ<=>");
  while (cur != pHead)
  {
    printf("%d<=>", cur->val);
    cur = cur->next;
  }
  printf("�ڱ�λ\n\n\n");
}

// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x)
{
  assert(pHead);
  ListNode* tail = pHead->prev;
  ListNode* newNode = CreateList(x);

  tail->next = newNode;
  newNode->prev = tail;
  newNode->next = pHead;
  pHead->prev = newNode;

  //���ʵ����posǰ����룬β����Ը�Ϊ��pheadǰ����룬��β��ListInsert(pHead, x);
}

// ˫������βɾ
void ListPopBack(ListNode* pHead)
{
  // ȷ��pHead���ǿ�ָ��
  assert(pHead);

  // ȷ������Ϊ�գ�������һ���ڵ㣩
  assert(pHead->next != pHead);

  // ��ȡβ�ڵ����ǰһ���ڵ�
  ListNode* tail = pHead->prev;
  ListNode* tailPrev = tail->prev;

  // �ͷ�β�ڵ�ռ�õ��ڴ�
  free(tail);

  // ����ָ���Ա��������������
  pHead->prev = tailPrev;
  tailPrev->next = pHead;

  //���ʵ����posλ��ɾ����βɾ���Ը�Ϊ��phead->prevɾ������βɾListErase(pHead->prev);
}


// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x)
{
  assert(pHead);
  ListNode* newNode = CreateList(x);
  ListNode* fast = pHead->next;
  pHead->next = newNode;
  newNode->next = fast;
  newNode->prev = pHead;
  fast->prev = newNode;

  //���ʵ����posǰ����룬ͷ����Ը�Ϊ��phead->nextǰ����룬��ͷ��ListInsert(pHead->next, x);
}

// ˫������ͷɾ
void ListPopFront(ListNode* pHead)
{
  assert(pHead);
  assert(pHead->prev != pHead);
  ListNode* first = pHead->next;
  ListNode* second = first->next;
  pHead->next = second;
  second->prev = pHead;
  free(first);
  first = NULL;

  //���ʵ����posλ��ɾ����ͷɾ���Ը�Ϊ��phead->nextɾ������ͷɾListErase(pHead->next);
}

// ˫���������
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
  assert(pHead);
  ListNode* cur = pHead->next;
  while (cur != pHead)
  {
    if (cur->val == x)
    {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;
}

// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
  assert(pos);
  ListNode* newNode = CreateList(x);
  ListNode* posPrev = pos->prev;

  newNode->next = pos;
  pos->prev = newNode;

  newNode->prev = posPrev;
  posPrev->next = newNode;

  //�����pheadǰ����룬��β��ListInsert(pHead, x);
  //�����phead->nextǰ����룬��ͷ��ListInsert(pHead->next, x);
}

// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos)
{
  assert(pos);
  ListNode* posPrev = pos->prev;
  ListNode* posNext = pos->next;

  posPrev->next = posNext;
  posNext->prev = posPrev;

  free(pos);
  pos = NULL;
  //�����phead->prevǰ��ɾ������βɾListErase(pHead->prev);
  //�����phead->nextǰ��ɾ������ͷɾListErase(pHead->next);
}
