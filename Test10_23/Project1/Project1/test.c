
//int main()
//{
//  char str1[] = "hello bit.";
//  char str2[] = "hello bit.";
//  const char* str3 = "hello bit.";
//  const char* str4 = "hello bit.";
//  if (str1 == str2)
//    printf("str1 and str2 are same\n");
//  else
//    printf("str1 and str2 are not same\n");
//
//  if (str3 == str4)
//    printf("str3 and str4 are same\n");
//  else
//    printf("str3 and str4 are not same\n");
//
//  return 0;
//}
//int main()
//{
//  int arr[10] = { 0 };
//  int(*p)[10] = &arr;
//  return 0;
//}
//int Add(int x, int y)
//{
//  return x + y;
//}
//int main()
//{
//  //������ - ������Ԫ�صĵ�ַ
//  //&������ - ����ĵ�ַ
//
//  //���ں�����&�������ͺ��������Ǻ����ĵ�ַ
//
//
//  printf("%p\n", &Add);
//  printf("%p\n", Add);
//
//  int* p1 = &Add;
//  int* p2 = Add;
//
//  return 0;
//}


//void (*)();//����ָ������
//(void (*)()) //ǿ������ת��
//(int*)0x0012ff40
//Add - 0x0012ff40
   
//int main()
//{
//  //
//  //����0��ַ���ĺ��������õĺ������������޲Σ�����������void
//  (*(void (*)()) 0)();
//
//  return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*****  1. add  2.sub  *****\n");
//	printf("*****  3. mul  4.div  *****\n");
//	printf("*****  0. exit        *****\n");
//	printf("***************************\n");
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("������2��������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//  int input = 0;
//
//  do
//  {
//    menu();
//    printf("��ѡ��:>");
//    scanf("%d", &input);
//    switch (input)
//    {
//    case 1:
//      calc(Add);
//      break;
//    case 2:
//      calc(Sub);
//      break;
//    case 3:
//      calc(Mul);
//      break;
//    case 4:
//      calc(Div);
//      break;
//    case 0:
//      printf("�˳�������\n");
//      break;
//    default:
//      printf("ѡ�����, ����ѡ��\n");
//      break;
//    }
//  } while (input);
//
//  return 0;
//}

//
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*****  1. add  2.sub  *****\n");
//	printf("*****  3. mul  4.div  *****\n");
//	printf("*****  0. exit        *****\n");
//	printf("***************************\n");
//}

//int main()
//{
//	//����ָ�������
//	//ת�Ʊ�
//	int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};
//
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("ѡ���������ѡ��\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	int arr[] = { 3,1,5,7,2,4,8,6,0,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//  test1();
//  return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void Swap(char* buf1, char* buf2, size_t width)
{
  int i = 0;
  for (i = 0; i < width; i++)
  {
    char tmp = *buf1;
    *buf1 = *buf2;
    *buf2 = tmp;
    buf1++;
    buf2++;
  }
}

void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
{
    //����
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        //һ��ð������Ĺ���
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            //if (arr[j] > arr[j + 1])
            if(cmp((char*)base+j*width, (char*)base +(j+1)*width) > 0)
            {
                //����
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
            }
        }
    }
}




int cmp_int(const void* e1, const void* e2)
{
  return *(int*)e1 - *(int*)e2;
}




void print_arr(int arr[], int sz)
{
  int i = 0;
  for (i = 0; i < sz; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


void test1()
{
    int arr[] = { 3,1,5,2,4,8,7,6,9,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    print_arr(arr, sz);
}

int main()
{
  test1();
}
