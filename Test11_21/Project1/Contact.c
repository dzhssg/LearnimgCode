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
  printf("%-4s %-4s %-4d %-4s %-4s\n",
    pcon->a[find].name,
    pcon->a[find].sex,
    pcon->a[find].age,
    pcon->a[find].tel,
    pcon->a[find].addr
  );
}
