#include"stack.h"

void stackInit(struct stack* ps, int n)
{
  //容量固定
  ps->a = (int*)malloc(sizeof(int) * n);
}

void StackPush(struct stack* ps, int x)
{
}


void f(int a, char b)  //_Z1fic 
{
  cout << "f(int a,char b)" << endl;
}
void f(char b, int a)	//_Z1fci
{
  cout << "f(char b, int a)" << endl;
}
