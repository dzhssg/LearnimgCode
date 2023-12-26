#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int STDataType;
typedef struct Stack
{
  STDataType* a;
  STDataType top; 
  STDataType capacity;
}ST;

void STInit(ST* pst);
void STDestroy(ST* pst);
void STPush(ST* pst,STDataType x);
void STPop(ST* pst);
STDataType STTop(ST* pst);
bool STEmpty(ST* pst);
int STSize(ST* pst);
