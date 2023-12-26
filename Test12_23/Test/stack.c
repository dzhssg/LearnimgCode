#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

// 初始化栈
void STInit(ST* pst)
{
  assert(pst);
  pst->a = NULL;       // 初始时，数组指针为空
  pst->top = 0;        // 栈顶指针初始为0，表示栈为空
  pst->capacity = 0;   // 初始容量为0
}

// 销毁栈
void STDestroy(ST* pst)
{
  assert(pst);
  free(pst->a);        // 释放栈内部的数组空间
  pst->a = NULL;       // 将数组指针置为空
  pst->top = 0;        // 栈顶指针重置为0
  pst->capacity = 0;   // 容量重置为0
}

// 检查并扩展栈的容量
void SLCheckCapacity(ST* pst)
{
  assert(pst);
  if (pst->top == pst->capacity)
  {
    int newCapacity = (pst->capacity == 0) ? 4 : pst->capacity * 2;
    STDataType* tmp = (STDataType*)realloc(pst->a, sizeof(STDataType) * newCapacity);
    if (tmp == NULL)
    {
      perror("realloc fail");
      exit(1); // 如果内存分配失败，则退出程序
    }

    pst->a = tmp;
    pst->capacity = newCapacity;
  }
}

// 向栈中推入一个元素
void STPush(ST* pst, STDataType x)
{
  assert(pst);
  SLCheckCapacity(pst); // 检查并扩展容量
  pst->a[pst->top] = x; // 存放元素
  pst->top++;           // 栈顶指针增加
}

// 从栈中弹出一个元素
void STPop(ST* pst)
{
  assert(pst);
  assert(pst->top > 0); // 确保栈不为空
  pst->top--;           // 栈顶指针减少
}

// 获取栈顶元素
STDataType STTop(ST* pst)
{
  assert(pst);
  assert(pst->top > 0); // 确保栈不为空
  return pst->a[pst->top - 1]; // 返回栈顶元素
}

// 检查栈是否为空
bool STEmpty(ST* pst)
{
  assert(pst);
  return pst->top == 0; // 如果栈顶指针为0，则栈为空
}

// 获取栈的大小
int STSize(ST* pst)
{
  assert(pst);
  return pst->top; // 返回栈顶指针的位置，即栈的大小
}
