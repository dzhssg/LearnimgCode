#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
  int a[] = { 1,2,3,4,5,1,2,3,4 };

  int i = 0;
  int sz = sizeof(a) / sizeof(a[0]);   //�����С

  for (i = 0; i < sz; i++)	//ѭ������ÿ��Ԫ��
  {
    int count = 0;				//��������
    int j = 0;
    for (j = 0; j < sz; j++)		//ѭ������ÿ��Ԫ��
    {
      if (a[i] == a[j])		//��Ԫ����ͬ��ʱ��count++
        count++;			//��Ϊ���ζ��Ǵ�a[0]����������count����Ϊ1
    }
    if (count == 1)				//������ĳ��Ԫ�ص������֣���ӡ����
      printf("%d\n", a[i]);
  }

  return 0;
}
