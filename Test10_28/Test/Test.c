#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//  int arr[] = { 1,2,3,4,5 };
//  int* pa = arr;
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  for (int i = 0; i < sz; i++)
//  {
//    printf("%d ", *pa++);
//  }
//}



//void  sort(int arr[], int sz)
//{
//  int i = 0;
//  int j = 0;
//  for (i = 0; i < sz - 1; i++)
//  {
//    for (j = 0; j < sz - i - 1; j++)
//    {
//      if (arr[j] > arr[j + 1])
//      {
//        int tmp;
//        tmp = arr[j];
//        arr[j] = arr[j + 1];
//        arr[j + 1] = tmp;
//      }
//    }
//  }
//}
//
//int main()
//{
//  int arr[] = { 6,4,5,8,9,7 };
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  sort(arr, sz);
//  for (int i = 0; i < sz; i++)
//  {
//    printf("%d ", arr[i]);
//  }
//}


//
//void swap(int arr[], int sz)
//
//{
//  int left = 0;
//  int right = sz - 1;
//  int tmp = 0;
//  while (left < right)
//  {
//    // ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//    while (arr[left] % 2 == 1)
//    {
//      left++;
//    }
//
//    // �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//    while (arr[right] % 2 == 0)
//    {
//      right--;
//    }
//
//    // ���ż�����������ҵ����������������ݵ�λ��
//    // Ȼ������ң�ֱ������ָ������
//    if (left < right)
//    {
//      tmp = arr[left];
//      arr[left] = arr[right];
//      arr[right] = tmp;
//    }
//  }
//}
//int main()
//{
//  int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//  int sz = sizeof(arr) / sizeof(arr[0]);
//  swap(arr, sz);
//  for (int i = 0; i < sz; i++)
//  {
//    printf("%d ", arr[i]);
//  }
//  return 0;
//}




void swap1(char *src ,int k)
{
  int len = strlen(src);
  int times = k % len;//ȥ����������д���

  for (int i = 0; i < times; i++)
  {
    char tmp = src[0];//�ѵ�һ��Ԫ�ظ�tmp
    int j = 0;
    for (j = 0; j < len - 1; j++)//�������Ԫ���Ƶ�ǰ����
    {
      src[j] = src[j + 1];
    }
    src[j] = tmp;//���ԭ����һ��Ԫ�طŵ����������
  }
}


/*�����⺯�������*/
void swap2(char* str, int  k)
{
  int len = strlen(str);
  int times = k % len;
  char tmp[100] = { 0 };
  //����
  strcpy(tmp, str + times);
  //ƴ�ӵ�ָ��λ��tmp,��str��ʼƴ��3��
  strncat(tmp, str, k);
  //�ٽ�tmpȫ��������str��
  strcpy(str, tmp);

}


void Revese(char * str, int left, int right)
{
  while (left < right)
  {
    char tmp;
    tmp = str[left];
    str[left] = str[right];
    str[right] = tmp;
    left++;
    right--;
  }

}

void swap3(char* str, int  k)
{
  int len = strlen(str);
  int time = k % len;
  Revese(str, 0, k - 1);
  Revese(str, k, len-1);
  Revese(str, 0, len-1);
   
}


int main()
{
  char str[] = "abcde";
  printf("������Ҫ����Ҫ��Ծ�����ĸ�����\n");
  int k = 0;
  scanf("%d", &k);
  swap3(str,k);
  printf("%s", str);
}
