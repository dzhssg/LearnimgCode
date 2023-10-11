#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  scanf("%d%d", &a, &b);

  for (int i = 32; i > 0; i -= 1)
  {
    printf("%d", ((a >> i) & 1));
  }
  printf("\n");

  for (int i = 32; i > 0; i -= 1)
  {
    printf("%d", ((b >> i) & 1));

  }
  return 0;
}
