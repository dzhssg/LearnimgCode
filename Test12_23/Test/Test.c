#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

int main()
{
  ST stack;            // 定义栈变量
  ST* pst = &stack;    // pst 指向 stack
  STInit(pst);         // 初始化栈

  // 向栈中添加元素
  STPush(pst, 1);
  STPush(pst, 2);
  STPush(pst, 3);
  STPush(pst, 4);

  // 打印并弹出栈中的元素
  while (!STEmpty(pst))
  {
    printf("%d ", STTop(pst));
    STPop(pst);
  }
  printf("\n");

  STDestroy(pst); // 销毁栈
  return 0;
}
