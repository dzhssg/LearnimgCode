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
  printf("��������ϵ�˵�������\n");
  scanf("%s", info.name);
  printf("��������ϵ�˵��Ա�\n");
  scanf("%s", info.sex);
  printf("��������ϵ�˵����䣺\n");
  scanf("%d", &info.age);
  printf("��������ϵ�˵ĵ绰��\n");
  scanf("%s", info.tel);
  printf("��������ϵ�˵�סַ��\n");
  scanf("%s", info.addr);

  SLPushBack(pcon, info);
}

<<<<<<< HEAD

int FindByName(contact* pcon, char name[])
{
  for (int i = 0; i < pcon->size; i++)
  {
    if (strcmp(pcon->a[i], name) == 0)
    return i;
=======
int FindByName(contact* pcon,char name)
{
  for (int i = 0; i < pcon->size; pcon->size++)
  {
    if (strcmp(pcon->size,name)==0)
    {
      return i;
    }
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
  }
  return -1;
}

<<<<<<< HEAD


void ContactDel(contact* pcon)
{

  printf("������Ҫɾ�����û����ƣ�\n");
  char name[NAME_MAX];
  scanf("%s", name);
  int Findidex = FindByName(pcon, name);
  if (Findidex < 0)
  {
    printf("Ҫɾ������ϵ�˲����ڣ�\n");
    return;
  }
  
  SLErase(pcon, Findidex);
}


void ContactModify(contact* pcon)
{
  printf("������Ҫ�޸ĵ���ϵ�����ƣ�\n");
  char name[NAME_MAX];
  scanf("%s", name);
  int find = FindByName(pcon, name);
  if (find < 0)
  {
    printf("Ҫ�޸ĵ��û����Ʋ����ڣ�\n");
    return;
  }
  printf("�������µ��û����ƣ�\n");
  scanf("%s", pcon->a[find].name);
  printf("�������µ��û��Ա�\n");
  scanf("%s", pcon->a[find].sex);
  printf("�������µ��û����䣺\n");
  scanf("%d", &pcon->a[find].age);
  printf("�������µ��û��绰��\n");
  scanf("%s", pcon->a[find].tel);
  printf("�������µ��û�סַ��\n");
  scanf("%s", pcon->a[find].addr);

  printf("�޸ĳɹ���\n");
=======
void ContactDel(contact* pcon)
{
  printf("������Ҫɾ�����û�������:\n");
  char name[NAME_MAX];
  scanf("%s", &name);
  int findidex = FindByName(pcon,name);
  SLPopBack(pcon);
  if (findidex < 0)
  {
    printf("Ҫɾ������ϵ�˲�����");
      return;
  }
  SLErase(pcon, findidex);
}

void ContactModify(contact* pcon)
{
  printf("������Ҫ�޸ĵ��û����ƣ�\n");
  char name[NAME_MAX];
    scanf("%s", name);
    int find = FindByName(pcon, name);
      if (find < 0)
      {
        printf("Ҫ�޸ĵ��û������ڣ�\n");
        return;
      }
      printf("�������µ��û����ƣ�\n");
      scanf("%s", pcon->a[find].name);
      printf("�������µ��û��Ա�\n");
      scanf("%s", pcon->a[find].sex);
      printf("�������µ��û����䣺\n");
      scanf("%s", pcon->a[find].age);
      printf("�������µ��û��绰��\n");
      scanf("%s", pcon->a[find].tel);
      printf("�������µ��û���ַ��\n");
      scanf("%s", pcon->a[find].addr);
      printf("�޸ĳɹ�\n");
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
}

void Contactshow(contact* pcon)
{
  printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
  printf("������Ҫ���ҵ��û����ƣ�\n");
  scanf("%s", name);
  int find = FindByName(pcon, name);
  if (find < 0)
  {
    printf("����ϵ�˲�����\n");
    return;
  }
<<<<<<< HEAD
  printf("%-4s %-4s %-4d %-4s %-4s\n",
=======
  printf("%s %s %d %s %s\n",
>>>>>>> c3efaaa07042c1b670099cc730e87c84c6f5a1d2
    pcon->a[find].name,
    pcon->a[find].sex,
    pcon->a[find].age,
    pcon->a[find].tel,
    pcon->a[find].addr
  );
}
