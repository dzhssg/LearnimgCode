//using std::cout;
//using std::endl;
//namespace Test
//{
//  namespace p1
//  {
//    void push()
//    {
//      cout << "sz" << endl;
//    }
//  }
//
//  namespace p2
//  {
//    void push()
//    {
//      cout << "ez" << endl;
//    }
//  }
//}
//
//int main()
//{
//  Test::p1::push();
//  Test::p2::push();
//}

//#include<iostream>
//using namespace::std;
//
//int main()
//{
//  //1.左移
//  int i = 100;
//  i << 1;
//  
//
//  //2.流插入 自动识别类型
//  cout << "hello word"<<i<<'\n';
//  return 0;
//}


//#include<iostream>
//using namespace::std;
//
//int main()
//{
//
//  char ch;
//  //1.右移
//  int i = 100;
//  i << 1;
//  
//
//  //2.流提取
//  cin >> i >> ch;
//  cout<< i << ch;
//  return 0;
//}



//半缺省参数从右往左依次给出
//半缺省参数不是缺少一半，而是有缺少就是半缺省

//void Func(int a , int b = 20 , int c =30)
//{
//  cout << "a:" << a << endl;
//  cout << "b:" << b << endl;
//  cout << "c:" << c << endl << endl;
//}
//
//int main()
//{
//  Func(1,2,3);
//  Func(1,2);
//  Func(1);
//
//  return 0;
//}
//#include<iostream>
//using namespace::std;
//#include"stack.h"
//
//int main()
//{
//  //假如要100个数据
//  struct stack sk1;
//  stackInit(&sk1, 100);
//
//  //假如要10个数据
//  struct stack sk2;
//  stackInit(&sk2,10);
//
//  //不知道要插入多少个数据
//  struct stack sk3;
//  stackInit(&sk3);
//}


#include"stack.h"


int main()
{
 
  f(10, 'a');
  f('a', 10);
  return 0;
}
