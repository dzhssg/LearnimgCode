#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void TestSL1()  // 头插,尾插
{
  printf("TestSL1:\n");
  SL s1;
  SLInit(&s1);
  SLPushFront(&s1, 10);
  SLPushBack(&s1, 30);
  SLprintf(&s1);
}

void TestSL2()  // 头删,尾删
{
  printf("TestSL2:\n");
  SL s1;
  SLInit(&s1);
  SLPushFront(&s1, 10);
  SLPushBack(&s1, 30);
  SLPushFront(&s1, 10);
  SLPushBack(&s1, 30);
  SLprintf(&s1);
  SLPopBack(&s1);
  SLPopFront(&s1);
  SLprintf(&s1);
}

void TestSL3()//任意下标位置的插入,删除测试
{
  printf("TestSL3:\n");
  SL s1;
  SLInit(&s1);
  SLPushFront(&s1, 10);
  SLPushBack(&s1, 30);
  SLprintf(&s1);
  SLInsert(&s1, 1, 520);
  SLprintf(&s1);
  SLErase(&s1, 2);
  SLprintf(&s1);
}

int main()
{
  TestSL1();
  TestSL2();
  TestSL3();
  return 0;
}
