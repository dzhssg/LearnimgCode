
int main()
{
  int n = 0;
  int m = 0;
  int count = 0;
  int arr[50] = { 0 };
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &m);
  for (int i = 0; i < n; i++)
  {

    if (arr[i] == m && arr[i] == arr[i + 1])
    {
      for (int j = i; j < n; j++)
      {
        arr[j] = arr[j + 1];
      }
      count++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == m)
    {
      for (int j = i; j < n; j++)
      {
        arr[j] = arr[j + 1];
      }
      count++;
    }

  }


  for (int i = 0; i < (n - count); i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
