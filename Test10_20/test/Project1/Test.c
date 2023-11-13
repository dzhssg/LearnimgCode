#include<stdio.h>
void left_move(char arr[], int time)
{
  int i = 0;
  int len = strlen(arr);
  time %= len;
  for (i = 0; i < time; i++)
  {
    char tmp = arr[0];
    int j = 0;
    for (j = 0; j < len - 1; j++)
    {
      arr[j] = arr[j + 1];
    }
    arr[len - 1] = tmp;
  }
}
int main()
{
  int t = 2;
  char arr[] = "ABCD";
  left_move(arr, t);
  printf("%s\n", arr);
  return 0;

}
