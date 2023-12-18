#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void SLTPrint(SLNode* phead) //打印单链表
{
  SLNode* cur = phead;
  while (cur != NULL)
  {
    printf("%d->", cur->val);
    cur=cur->next;
  }
  printf("NULL");
}

SLNode* CreateNode(SLNDataType x) //新建节点，开辟空间
{
  SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
  if (newnode == NULL)
  {
    perror("malloc fail");
    exit(-1);
  }
  newnode->val = x;
  newnode->next = NULL;
  return newnode;
}

void SLTPushBack(SLNode** pphead, SLNDataType x) //尾插
{
  assert(pphead);
  SLNode* newnode = CreateNode(x);
  if (* pphead == NULL)
  {
    *pphead = newnode;
  }
  else
  {
    SLNode* tail = * pphead; //找尾
    while (tail->next != NULL)
    {
      tail = tail->next;  //因为tail是局部变量，而tail->next是结构体,出来作用域tail就销毁了
    }
    tail->next = newnode; //所以这里把newnode赋值给tail->next
  }
}
  
void SLTPushFront(SLNode** pphead, SLNDataType x) //头插
{ 
  SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
  newnode->next =* pphead;
  newnode->val = x;
  *pphead = newnode;
  
}

void SLTPopBack(SLNode** pphead)  //尾删
{
  assert(pphead);
  assert(*pphead);
  if ((*pphead)->next== NULL)
  {
    free(*pphead);
    *pphead = NULL;
  }
  else
  {
   /*  SLNode* prev = NULL;
     SLNode* tail = *pphead;
     while (tail->next != NULL)
     {
       prev = tail;
       tail = tail->next;
     }
     free(tail);
     tail = NULL;
     prev->next = NULL;*/

    SLNode* tail = * pphead;
    while (tail->next->next != NULL)
    {
      tail = tail->next;
    }
    free(tail->next);
    tail->next = NULL;
  }
}
 


void SLTPopFront(SLNode** pphead) //头删
{
  assert(*pphead);
  SLNode* tail = *pphead;
  tail = tail->next;
  free(*pphead);
  *pphead = tail;
}


void* SLTInster(SLNode** pphead, SLNode* pos, SLNDataType x) //指定位置前面插入
{
  assert(pos);
  assert(pphead);
  assert(* pphead);
  SLNode* node = CreateNode(x);
  if (*pphead == pos)
  {
    node->next = *pphead;
    *pphead = node;
  }

  SLNode* cur = *pphead;
  while (cur->next != pos)
  {
    cur = cur->next;
  }
  cur->next = node;
  node->next = pos;
}

void* SLTEraseAfter(SLNode* pos) //指定位置后面删除
{
  assert(pos && pos->next);
  SLNode* del = pos->next;
  pos->next = del->next;
  free(del);
}

void SLTDestroy(SLNode** pphead) //销毁单链表
{
  assert(pphead);
  SLNode* cur= *pphead;
  while (cur)
  {
    SLNode* next = cur;
    free(cur);
    cur = next;
  }
  *pphead = NULL;
}

//查找第一个为x的节点

SLNode* SLTFind(SLNode** pphead, SLNDataType x) //pos的查找函数
{
  assert(pphead);
  SLNode* cur = *pphead;
  while (cur)
  {
    if (cur->val == x)
    {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;
}



