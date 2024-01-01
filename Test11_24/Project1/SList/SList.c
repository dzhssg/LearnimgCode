#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void SLTPrint(SLNode* phead) //��ӡ������
{
  SLNode* cur = phead;
  while (cur != NULL)
  {
    printf("%d->", cur->val);
    cur=cur->next;
  }
  printf("NULL");
}

SLNode* CreateNode(SLNDataType x) //�½��ڵ㣬���ٿռ�
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

void SLTPushBack(SLNode** pphead, SLNDataType x) //β��
{
  SLNode* newnode = CreateNode(x);
  if (* pphead == NULL)
  {
    *pphead = newnode;
  }
  else
  {
    SLNode* tail = * pphead; //��β
    while (tail->next != NULL)
    {
      tail = tail->next;  //��Ϊtail�Ǿֲ���������tail->next�ǽṹ��,����������tail��������
    }
    tail->next = newnode; //���������newnode��ֵ��tail->next
  }
}
  
void SLTPushFront(SLNode** pphead, SLNDataType x) //ͷ��
{ 
  SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
  newnode->next =* pphead;
  newnode->val = x;
  *pphead = newnode;
  
}

void SLTPopBack(SLNode** pphead)  //βɾ
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
     SLNode* prev = NULL;
     SLNode* tail = *pphead;
     while (tail->next != NULL)
     {
       prev = tail;
       tail = tail->next;
     }
     free(tail);
     tail = NULL;
     prev->next = NULL;

   /* SLNode* tail = * pphead;
    while (tail->next->next != NULL)
    {
      tail = tail->next;
    }
    free(tail->next);
    tail->next = NULL;*/
  }
}
 


void SLTPopFront(SLNode** pphead) //ͷɾ
{
  assert(*pphead);
  SLNode* tail = *pphead;
  tail = tail->next;
  free(*pphead);
  *pphead = tail;
}


void* SLTInster(SLNode** pphead, SLNode* pos, SLNDataType x) //ָ��λ��ǰ�����
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

void* SLTEraseAfter(SLNode* pos) //ָ��λ�ú���ɾ��
{
  assert(pos && pos->next);
  SLNode* del = pos->next;
  pos->next = del->next;
  free(del);
}

void SLTDestroy(SLNode** pphead) //���ٵ�����
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

//���ҵ�һ��Ϊx�Ľڵ�

SLNode* SLTFind(SLNode** pphead, SLNDataType x) //pos�Ĳ��Һ���
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



