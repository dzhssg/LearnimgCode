#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

// ��ʼ��ջ
void STInit(ST* pst)
{
  assert(pst);
  pst->a = NULL;       // ��ʼʱ������ָ��Ϊ��
  pst->top = 0;        // ջ��ָ���ʼΪ0����ʾջΪ��
  pst->capacity = 0;   // ��ʼ����Ϊ0
}

// ����ջ
void STDestroy(ST* pst)
{
  assert(pst);
  free(pst->a);        // �ͷ�ջ�ڲ�������ռ�
  pst->a = NULL;       // ������ָ����Ϊ��
  pst->top = 0;        // ջ��ָ������Ϊ0
  pst->capacity = 0;   // ��������Ϊ0
}

// ��鲢��չջ������
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
      exit(1); // ����ڴ����ʧ�ܣ����˳�����
    }

    pst->a = tmp;
    pst->capacity = newCapacity;
  }
}

// ��ջ������һ��Ԫ��
void STPush(ST* pst, STDataType x)
{
  assert(pst);
  SLCheckCapacity(pst); // ��鲢��չ����
  pst->a[pst->top] = x; // ���Ԫ��
  pst->top++;           // ջ��ָ������
}

// ��ջ�е���һ��Ԫ��
void STPop(ST* pst)
{
  assert(pst);
  assert(pst->top > 0); // ȷ��ջ��Ϊ��
  pst->top--;           // ջ��ָ�����
}

// ��ȡջ��Ԫ��
STDataType STTop(ST* pst)
{
  assert(pst);
  assert(pst->top > 0); // ȷ��ջ��Ϊ��
  return pst->a[pst->top - 1]; // ����ջ��Ԫ��
}

// ���ջ�Ƿ�Ϊ��
bool STEmpty(ST* pst)
{
  assert(pst);
  return pst->top == 0; // ���ջ��ָ��Ϊ0����ջΪ��
}

// ��ȡջ�Ĵ�С
int STSize(ST* pst)
{
  assert(pst);
  return pst->top; // ����ջ��ָ���λ�ã���ջ�Ĵ�С
}
