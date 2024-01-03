#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h";

int main()
{
  Qu Qu;
  QInit(&Qu);
  QPush(&Qu ,1);
  QPush(&Qu, 2);
  QPush(&Qu, 3);
  QPush(&Qu, 4);
  while (!qEmpty(&Qu))
  {
    printf("%d ", QFront(&Qu));
    
    QPop(&Qu);
  }
  QDestroy(&Qu);
  return 0;
}
