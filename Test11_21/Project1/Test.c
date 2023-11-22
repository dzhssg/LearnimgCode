#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void contact01()
{
  CInfo con;
  ContactInit(&con);
  ContactAdd(&con);
  Contactshow(&con);
}

int main()
{
  contact01();
  return 0;
}
