#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
int main()
{
   SL s1;
  SLInit(&s1);
  SLPushBack(&s1, 1);
  SLPushBack(&s1, 1);
  SLPushFront(&s1, 2);
  SLPushFront(&s1, 2);
  SLPopBack(&s1);
  SLPopFront(&s1);
  SLInsert(&s1, 1, 2);
  SLPrint(&s1);
  SLErase(&s1, 1);
  SLPrint(&s1);
}
