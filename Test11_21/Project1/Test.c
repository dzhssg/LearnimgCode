#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

<<<<<<< HEAD
void menu()
{
  printf("***********************************************\n");
  printf("***********************************************\n");
  printf("***********1.添加联系人 2.删除联系人***********\n");
  printf("***********3.修改联系人 4.打印联系人***********\n");
  printf("***********5.打印联系人 0.退出*****************\n");
  printf("***********************************************\n");
  printf("***********************************************\n");
=======
void contact01()
{
  CInfo con;
  ContactInit(&con);
  ContactAdd(&con);
  Contactshow(&con);
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
}

int main()
{
<<<<<<< HEAD
  
  int open = 0;
  contact con;
  ContactInit(&con);
   do
   {
     menu();
     printf("请输入你的操作\n");
     scanf("%d", &open);
    switch (open)
    {
    case 1:
      ContactAdd(&con);
      break;
    case 2:
      ContactDel(&con);
      break;
    case 3:
      ContactModify(&con);
      break;
    case 4:
      Contactshow(&con);
      break;
    case 5:
      ContactFind(&con);
      break;
    case 0:
      printf("程序退出");
      break;
    default:
      break;
    }
   } while (open !=0);
   ContactDestroy(&con);
=======
  contact01();
  return 0;
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
}
