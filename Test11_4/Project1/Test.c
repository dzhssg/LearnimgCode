#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu
//{
//  char name[20];
//  int age;
//  float score;
//}s3 = { "wangwu", 24, 98.0f };
//
//int main()
//{
//  struct Stu s1 = { "zhangsan", 20, 98.5f };
//  struct Stu s2 = { "lisi", 33, 68.5f };
//  struct Stu s4 = { .age = 22, .name = "ruhua", .score = 55.5f };//不按顺序初始化
//  printf("%s %d %f\n", s1.name, s1.age, s1.score);
//  printf("%s %d %f\n", s4.name, s4.age, s4.score);
//  return 0;
//}

//struct S1
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//
//int main()
//{
//	struct S2 s2 = { 'a', 100, 'b'};
//	printf("%zd\n", sizeof(s2));
//
//	struct S1 s1 = { 'a', 'b', 100 };
//	printf("%zd\n", sizeof(s1));
//	return 0;
//}



#pragma pack(1)//设置默认对齐数为1
struct S
{
    char c1;
    int i;
    char c2;
};
#pragma pack()//取消设置的对齐数，还原为默认

int main()
{
    //输出的结果是什么？
    printf("%zd\n", sizeof(struct S));
    return 0;
}

struct S
{
  int data[1000];
  int num;
};

void print1(struct S t)
{
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", t.data[i]);
  }
  printf("\n");
  printf("num = %d\n", t.num);
}

void print2(const struct S* ps)
{
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    printf("%d ", ps->data[i]);
  }
  printf("\n");
  printf("num = %d\n", ps->num);
}

int main()
{
  struct S s = { {1,2,3,4}, 1000 };

  print1(s);//传递结构体变量 - 传值调用
  print2(&s);//传递结构体变量的地址 - 传址调用

  return 0;
}
