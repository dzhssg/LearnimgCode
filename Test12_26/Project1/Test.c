#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

int main()
{
  Queue Q;
  QInit(&Q);
  QPush(&Q, 1);
  QPush(&Q, 2);
  QPush(&Q, 3);
  QPush(&Q, 4);
  QPop(&Q);
  while (!QueueEmpty(&Q))
  {
    printf("%d ", QueueFront(&Q));
    QPop(&Q);
  }

  return 0;
}
