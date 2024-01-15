#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
  BTDataType _data;
  struct BinaryTreeNode* _left;
  struct BinaryTreeNode* _right;
}BTNode;

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
// ����������
void BinaryTreeDestory(BTNode** root);
// �������ڵ����
int BinaryTreeSize(BTNode* root);
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root);
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k);
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root);
// �������������
void BinaryTreeInOrder(BTNode* root);
// �������������
void BinaryTreePostOrder(BTNode* root);
// �������
void BinaryTreeLevelOrder(BTNode* root);
// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root);




typedef BTNode* QDataType; // ���������������Ϊint

// ���нڵ�Ľṹ�嶨��
typedef struct QueueNode
{
  QDataType val; // �ڵ�洢������
  struct QueueNode* next; // ָ����һ���ڵ��ָ��
} QNode;

// ���еĽṹ�嶨��
typedef struct Queue
{
  QNode* phead; // ָ�����ͷ����ָ��
  QNode* ptail; // ָ�����β����ָ��
  int size; // ���еĴ�С
} Queue;

// ��������
void QInit(Queue* pq); // ��ʼ������
void QDestroy(Queue* pq); // ���ٶ���

void QPush(Queue* pq, QDataType x); // ����������Ԫ��
void QPop(Queue* pq); // �Ӷ������Ƴ�Ԫ��

QDataType QueueFront(Queue* pq); // ��ȡ����ͷ��Ԫ��
QDataType QueueBack(Queue* pq); // ��ȡ����β��Ԫ��

bool QueueEmpty(Queue* pq); // �������Ƿ�Ϊ��
int QueueSize(Queue* pq); // ��ȡ���еĴ�С
