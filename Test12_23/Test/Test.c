#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

int main()
{
  ST stack;            // ����ջ����
  ST* pst = &stack;    // pst ָ�� stack
  STInit(pst);         // ��ʼ��ջ

  // ��ջ�����Ԫ��
  STPush(pst, 1);
  STPush(pst, 2);
  STPush(pst, 3);
  STPush(pst, 4);

  // ��ӡ������ջ�е�Ԫ��
  while (!STEmpty(pst))
  {
    printf("%d ", STTop(pst));
    STPop(pst);
  }
  printf("\n");

  STDestroy(pst); // ����ջ
  return 0;
}
