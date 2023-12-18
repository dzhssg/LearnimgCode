#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
// 创建返回链表的头结点.

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

// 双向链表销毁

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

// 双向链表打印

void ListPrint(ListNode* pHead)
{
  assert(pHead);
  ListNode* cur = pHead->next;
  printf("哨兵位<=>");
  while (cur != pHead)
  {
    printf("%d<=>", cur->val);
    cur = cur->next;
  }
  printf("哨兵位\n\n\n");
}

// 双向链表尾插
void ListPushBack(ListNode* pHead, LTDataType x)
{
  assert(pHead);
  ListNode* tail = pHead->prev;
  ListNode* newNode = CreateList(x);

  tail->next = newNode;
  newNode->prev = tail;
  newNode->next = pHead;
  pHead->prev = newNode;

  //如果实现了pos前面插入，尾插可以改为在phead前面插入，即尾插ListInsert(pHead, x);
}

// 双向链表尾删
void ListPopBack(ListNode* pHead)
{
  // 确保pHead不是空指针
  assert(pHead);

  // 确保链表不为空（至少有一个节点）
  assert(pHead->next != pHead);

  // 获取尾节点和其前一个节点
  ListNode* tail = pHead->prev;
  ListNode* tailPrev = tail->prev;

  // 释放尾节点占用的内存
  free(tail);

  // 更新指针以保持链表的完整性
  pHead->prev = tailPrev;
  tailPrev->next = pHead;

  //如果实现了pos位置删除，尾删可以改为在phead->prev删除，即尾删ListErase(pHead->prev);
}


// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x)
{
  assert(pHead);
  ListNode* newNode = CreateList(x);
  ListNode* fast = pHead->next;
  pHead->next = newNode;
  newNode->next = fast;
  newNode->prev = pHead;
  fast->prev = newNode;

  //如果实现了pos前面插入，头插可以改为在phead->next前面插入，即头插ListInsert(pHead->next, x);
}

// 双向链表头删
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

  //如果实现了pos位置删除，头删可以改为在phead->next删除，即头删ListErase(pHead->next);
}

// 双向链表查找
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

// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
  assert(pos);
  ListNode* newNode = CreateList(x);
  ListNode* posPrev = pos->prev;

  newNode->next = pos;
  pos->prev = newNode;

  newNode->prev = posPrev;
  posPrev->next = newNode;

  //如果在phead前面插入，即尾插ListInsert(pHead, x);
  //如果在phead->next前面插入，即头插ListInsert(pHead->next, x);
}

// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
  assert(pos);
  ListNode* posPrev = pos->prev;
  ListNode* posNext = pos->next;

  posPrev->next = posNext;
  posNext->prev = posPrev;

  free(pos);
  pos = NULL;
  //如果在phead->prev前面删除，即尾删ListErase(pHead->prev);
  //如果在phead->next前面删除，即头删ListErase(pHead->next);
}
