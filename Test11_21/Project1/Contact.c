#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void ContactInit(contact* pcon)
{
  SLInit(pcon);
}
void ContactDestroy(contact* pcon)
{
  SLDestroy(pcon);
}

void ContactAdd(contact** pcon)
{
  CInfo info;
  printf("请输入联系人的姓名：\n");
  scanf("%s", info.name);
  printf("请输入联系人的性别：\n");
  scanf("%s", info.sex);
  printf("请输入联系人的年龄：\n");
  scanf("%d", &info.age);
  printf("请输入联系人的电话：\n");
  scanf("%s", info.tel);
  printf("请输入联系人的住址：\n");
  scanf("%s", info.addr);

  SLPushBack(pcon, info);
}


int FindByName(contact* pcon, char name[])
{
  for (int i = 0; i < pcon->size; i++)
  {
    if (strcmp(pcon->a[i], name) == 0)
    return i;
  }
  return -1;
}



void ContactDel(contact* pcon)
{

  printf("请输入要删除的用户名称：\n");
  char name[NAME_MAX];
  scanf("%s", name);
  int Findidex = FindByName(pcon, name);
  if (Findidex < 0)
  {
    printf("要删除的联系人不存在！\n");
    return;
  }
  
  SLErase(pcon, Findidex);
}


void ContactModify(contact* pcon)
{
  printf("请输入要修改的联系人名称：\n");
  char name[NAME_MAX];
  scanf("%s", name);
  int find = FindByName(pcon, name);
  if (find < 0)
  {
    printf("要修改的用户名称不存在！\n");
    return;
  }
  printf("请输入新的用户名称：\n");
  scanf("%s", pcon->a[find].name);
  printf("请输入新的用户性别：\n");
  scanf("%s", pcon->a[find].sex);
  printf("请输入新的用户年龄：\n");
  scanf("%d", &pcon->a[find].age);
  printf("请输入新的用户电话：\n");
  scanf("%s", pcon->a[find].tel);
  printf("请输入新的用户住址：\n");
  scanf("%s", pcon->a[find].addr);

  printf("修改成功！\n");
}

void Contactshow(contact* pcon)
{
  printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "住址");
  for(int i = 0; i < pcon->size; i++)
  {
    printf("%-4s %-4s %-4d %-4s %-4s\n",
      pcon->a[i].name,
      pcon->a[i].sex,
      pcon->a[i].age,
      pcon->a[i].tel,
      pcon->a[i].addr
    );
  }
}

void ContactFind(contact* pcon)
{
  char name[NAME_MAX];
  printf("请输入要查找的用户名称：\n");
  scanf("%s", name);
  int find = FindByName(pcon, name);
  if (find < 0)
  {
    printf("该联系人不存在\n");
    return;
  }
  printf("%-4s %-4s %-4d %-4s %-4s\n",
    pcon->a[find].name,
    pcon->a[find].sex,
    pcon->a[find].age,
    pcon->a[find].tel,
    pcon->a[find].addr
  );
}
