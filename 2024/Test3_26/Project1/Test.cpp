#include<iostream>
using namespace std; 
#include<assert.h>
//int main()
//{
//  int a = 0;
//
//  //引用，b就是a的别名
//  int& b = a;
//
//  cout << &a << endl;
//  cout << &b << endl;
//  return 0;
//}

//void Swap(int* a, int* b)
//{
//  int tmp;
//  tmp = *a;
//  *a = *b;
//  *b = tmp;
//}
//
//
//void Swap(int &a , int &b)
//{
//  int tmp;
//  tmp = a;
//  a = b;
//  b = tmp;
//}
//
//int main()
//{
//  int x = 0, y = 1;
//  Swap(&x, &y);
//  cout << "x=" << x << endl;
//  cout << "y=" << y << endl;
//
//  Swap(x, y);
//  cout << "x=" << x << endl;
//  cout << "y=" << y << endl;
//}
//
// 
//int main()
//{
//  int a = 0;
//  //一个变量可以有多个引用
//  int& b = a;
//  int& c = a;
//  cout << a << b << c << endl;
//}

//int main()
//{
//  int a = 0;
//  
//  //引用一旦引用一个实体，再不能引用其他实体
//  int& b = a;
//  int x = 0;
//   b = x;
//  cout << a << b << endl;
//}

//int main()
//{
//  int a = 0;
//  //引用引用不能改变指向
//  int& b = a;
//  int x = 0;
//  b = x;//这里是赋值
//  cout << a << b << endl;
//}




//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void main()
//{
//  A a;
//  // 以值作为函数参数
//  size_t begin1 = clock();
//  for (size_t i = 0; i < 10000; ++i)
//    TestFunc1(a);
//  size_t end1 = clock();
//  // 以引用作为函数参数
//  size_t begin2 = clock();
//  for (size_t i = 0; i < 10000; ++i)
//    TestFunc2(a);
//  size_t end2 = clock();
//  // 分别计算两个函数运行结束后的时间
//  cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//  cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}


//int& func()
//{
//  static int a = 6;
//  return a;
//}
//
//int main()
//{
//  int &ret = func();
//  cout << ret << endl;
//  return 0;
//}


//struct SeqList
//{
//  //成员变量
//  int* a;
//  int size;
//  int cacpcity;
//
//  //成员函数
//  void Init()
//  {
//    a = (int*)malloc(sizeof(int) * 4);
//    size = 0;
//    cacpcity = 4;
//  }
//
//  void PushBack(int x)
//  {
//    //... 扩容
//    a[size++] = x;
//  }
//
//  //读写返回变量
//  int Get(int pos)
//  {
//    assert(pos >= 0);
//    assert(pos < size);
//
//    return a[pos];
//  }
//
//};
//
//int main()
//{
//  SeqList s;
//  s.Init();
//  s.PushBack(1);
//  s.PushBack(2);
//  s.PushBack(3);
//  s.PushBack(4);
//
//  for (int i = 0; i < s.size; i++)
//  {
//    cout << s.Get(i) << "";
//  }
//  cout << endl;
//
//  for (int i = 0; i < s.size; i++)
//  {
//    if (s.Get(i) % 2 == 0)
//    {
//      s.Get(i) *= 2;
//    }
//  }
//  cout << endl;
//  for (int i = 0; i < s.size; i++)
//  {
//    cout << s.Get(i) << "";
//  }
// }

int main()
{

}
