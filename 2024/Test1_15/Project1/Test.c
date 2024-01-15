#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

int main()
{
  BTDataType arr[] =  "ABD##E#H##CF##G##" ;
  int sz = sizeof(arr) / sizeof(arr[0]) - 1;
  int pi = 0;

  // 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
  BTNode* root = BinaryTreeCreate(arr, sz, &pi);
  //二叉树节点个数
  int n = BinaryTreeSize(root);
  printf("二叉树节点个数:%d\n", n);
  //二叉树叶子节点个数
  int nz = BinaryTreeLeafSize(root);
  printf("二叉树叶子节点个数:%d\n", nz);
  //二叉树第k层节点个数
  int nk = BinaryTreeLevelKSize(root, 4);
  printf("二叉树第k层节点个数:%d\n", nk);
  // 二叉树查找值为x的节点
  BinaryTreeFind(root, 'A');
  printf("\n");
  // 二叉树前序遍历
  printf("二叉树前序遍历:");
  BinaryTreePrevOrder(root);
  printf("\n");
  // 二叉树中序遍历
  printf("二叉树中序遍历:");
  BinaryTreeInOrder(root);
  printf("\n");
  // 二叉树后序遍历
  printf("二叉树后序遍历:");
  BinaryTreePostOrder(root);
  printf("\n");
  // 二叉树层序遍历
  printf("二叉树层序遍历:");
  BinaryTreeLevelOrder(root);
  printf("\n");
  // 判断二叉树是否是完全二叉树
  printf("%d", BinaryTreeComplete(root));
}
