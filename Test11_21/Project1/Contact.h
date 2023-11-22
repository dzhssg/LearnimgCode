#define _CRT_SECURE_NO_WARNINGS 1
#define NAME_MAX 100
#define SEX_MAX 10
#define TEL_MAX 15
#define ADDR_MAX 100

//创建通讯录的结构
typedef struct ContactInfo
{
  char name[NAME_MAX];
  char sex[SEX_MAX];
  int age;
  char tel[TEL_MAX];
  char addr[ADDR_MAX];
}CInfo;

typedef struct SeqList contact;

//此处相当于把顺序表的名字改为通讯录，也可以理解为我把顺序表的SL改为了contact,不容易搞混
//因为并没有调用"SeqList.h"里面的数据或者函数，所以这里不需要调用

void ContactInit(contact* pcon);    //通讯录的创建
void ContactDestroy(contact* pcon); //通讯录的销毁

void ContactAdd(contact* *pcon);    //添加联系人
void ContactDel(contact* pcon);     //删除联系人

void ContactModify(contact* pcon);  //修改联系人
void Contactshow(contact* pcon);    //打印联系人

void ContactFind(contact* pcon);    //查找联系人
