#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;
  int count = 0;
  scanf("%d%d", &a, &b);

  for (int i = 32; i > 0; i -= 1)
  {

    if (((a >> i) & 1) == ((b >> i) & 1))
    {
      count++;
    }
  }
  printf("%d", (32-count));


  return 0;
}
