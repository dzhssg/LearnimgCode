#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void menu()
{
  printf("***********************************************\n");
  printf("***********************************************\n");
  printf("***********1.�����ϵ�� 2.ɾ����ϵ��***********\n");
  printf("***********3.�޸���ϵ�� 4.��ӡ��ϵ��***********\n");
  printf("***********5.��ӡ��ϵ�� 0.�˳�*****************\n");
  printf("***********************************************\n");
  printf("***********************************************\n");
}

int main()
{
  
  int open = 0;
  contact con;
  ContactInit(&con);
   do
   {
     menu();
     printf("��������Ĳ���\n");
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
      printf("�����˳�");
      break;
    default:
      break;
    }
   } while (open !=0);
   ContactDestroy(&con);
}
