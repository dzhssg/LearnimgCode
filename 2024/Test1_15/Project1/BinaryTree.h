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

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
// 二叉树销毁
void BinaryTreeDestory(BTNode** root);
// 二叉树节点个数
int BinaryTreeSize(BTNode* root);
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root);
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root);
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root);
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root);
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root);
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);




typedef BTNode* QDataType; // 定义队列数据类型为int

// 队列节点的结构体定义
typedef struct QueueNode
{
  QDataType val; // 节点存储的数据
  struct QueueNode* next; // 指向下一个节点的指针
} QNode;

// 队列的结构体定义
typedef struct Queue
{
  QNode* phead; // 指向队列头部的指针
  QNode* ptail; // 指向队列尾部的指针
  int size; // 队列的大小
} Queue;

// 函数声明
void QInit(Queue* pq); // 初始化队列
void QDestroy(Queue* pq); // 销毁队列

void QPush(Queue* pq, QDataType x); // 向队列中添加元素
void QPop(Queue* pq); // 从队列中移除元素

QDataType QueueFront(Queue* pq); // 获取队列头部元素
QDataType QueueBack(Queue* pq); // 获取队列尾部元素

bool QueueEmpty(Queue* pq); // 检查队列是否为空
int QueueSize(Queue* pq); // 获取队列的大小
