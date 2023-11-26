#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int jisuan(char *n)
{
  if (*n != '0')
    return 1 + jisuan(n + 1);
  else
    return 0;
}
int main()
{
  char arr[] = "bitmeng";
  int len = jisuan(&arr);
  printf("%d", len);
  return 0;
}
