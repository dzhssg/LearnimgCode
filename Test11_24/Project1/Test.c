#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main()
{
  SLNode* plist =NULL;
  printf("ͷ��β��:\n\n");
  SLTPushBack(&plist,1);
  SLTPushFront(&plist, 2);
  SLTPrint(plist);
  printf("\n\n");
  printf("ͷɾβɾ:\n\n");
  SLTPopBack(&plist, 1);
  SLTPopFront(&plist, 2);
  SLTPrint(plist);
  printf("\n\n");
  SLTPushBack(&plist, 1);
  SLTPushFront(&plist, 2);
  SLTPushBack(&plist, 1);
  SLTPushFront(&plist, 2);
  printf("����λ�ò���ɾ����ɾ��1������10");
  printf("\n\n");
  SLTPrint(plist);
  printf("\n\n");
  SLNode* Print = SLTFind(&plist, 1);
  SLTInster(&plist,Print, 10);
  SLTEraseAfter(Print);
  SLTPrint(plist);
  return 0;
}
