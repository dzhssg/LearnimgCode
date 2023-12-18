#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


void Test1()
{
  printf("Œ≤≤Â≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushBack(plist, 1);
  ListPushBack(plist, 2);
  ListPushBack(plist, 3);
  ListPrint(plist);
}

void Test2()
{
  printf("Œ≤…æ≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushBack(plist, 2);
  ListPushBack(plist, 4);
  ListPushBack(plist, 6);
  ListPopBack(plist);
  ListPrint(plist);
}

void Test3()
{
  printf("Õ∑≤Â≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushFront(plist, 2);
  ListPushFront(plist, 4);
  ListPushBack(plist, 2);
  ListPushBack(plist, 4);
  ListPrint(plist);
}

void Test4()
{
  printf("Õ∑…æ≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushFront(plist, 2);
  ListPushFront(plist, 4);
  ListPushBack(plist, 2);
  ListPushBack(plist, 4);
  ListPopFront(plist);
  ListPrint(plist);
}

void Test5()
{
  printf("≤È’“≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushFront(plist, 1);
  ListPushFront(plist, 2);
  ListPushFront(plist, 3);
  ListPushFront(plist, 4);
  ListNode* pos = ListFind(plist, 3);
  if(pos)
  {
    pos->val *= 100;
  }
  else
  {
    printf("√ª”–’“µΩ\n\n\n");
  }
  ListPrint(plist);
}

void Test6()
{
  printf("pos«∞≤Â»Î≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushBack(plist, 2);
  ListPushBack(plist, 4);
  ListNode* pos = ListFind(plist, 4);
  ListInsert(pos, 3);
  ListPrint(plist);
}

void Test7()
{
  printf("posŒª÷√…æ≥˝≤‚ ‘:\n");
  ListNode* plist = ListCreate();
  ListPushBack(plist, 2);
  ListPushBack(plist, 4);
  ListNode* pos = ListFind(plist, 4);
  ListErase(pos);
  ListPrint(plist);
}

int main()
{
  Test1();
  Test2();
  Test3();
  Test4();
  Test5();
  Test6();
  Test7();
  return 0;
}
