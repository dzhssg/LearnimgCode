#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main()
{
  SLNode* plist =NULL;
  printf("头插尾插:\n\n");
  SLTPushBack(&plist,1);
  SLTPushFront(&plist, 2);
  SLTPrint(plist);
  printf("\n\n");
  printf("头删尾删:\n\n");
  SLTPopBack(&plist, 1);
  SLTPopFront(&plist, 2);
  SLTPrint(plist);
  printf("\n\n");
  SLTPushBack(&plist, 1);
  SLTPushFront(&plist, 2);
  SLTPushBack(&plist, 1);
  SLTPushFront(&plist, 2);
  printf("任意位置插入删除，删除1，插入10");
  printf("\n\n");
  SLTPrint(plist);
  printf("\n\n");
  SLNode* Print = SLTFind(&plist, 1);
  SLTInster(&plist,Print, 10);
  SLTEraseAfter(Print);
  SLTPrint(plist);
  return 0;
}
