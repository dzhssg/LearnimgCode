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
//  //1.����
//  int i = 100;
//  i << 1;
//  
//
//  //2.������ �Զ�ʶ������
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
//  //1.����
//  int i = 100;
//  i << 1;
//  
//
//  //2.����ȡ
//  cin >> i >> ch;
//  cout<< i << ch;
//  return 0;
//}



//��ȱʡ���������������θ���
//��ȱʡ��������ȱ��һ�룬������ȱ�پ��ǰ�ȱʡ

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
//  //����Ҫ100������
//  struct stack sk1;
//  stackInit(&sk1, 100);
//
//  //����Ҫ10������
//  struct stack sk2;
//  stackInit(&sk2,10);
//
//  //��֪��Ҫ������ٸ�����
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
