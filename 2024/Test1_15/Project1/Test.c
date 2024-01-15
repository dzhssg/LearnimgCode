#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

int main()
{
  BTDataType arr[] =  "ABD##E#H##CF##G##" ;
  int sz = sizeof(arr) / sizeof(arr[0]) - 1;
  int pi = 0;

  // ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
  BTNode* root = BinaryTreeCreate(arr, sz, &pi);
  //�������ڵ����
  int n = BinaryTreeSize(root);
  printf("�������ڵ����:%d\n", n);
  //������Ҷ�ӽڵ����
  int nz = BinaryTreeLeafSize(root);
  printf("������Ҷ�ӽڵ����:%d\n", nz);
  //��������k��ڵ����
  int nk = BinaryTreeLevelKSize(root, 4);
  printf("��������k��ڵ����:%d\n", nk);
  // ����������ֵΪx�Ľڵ�
  BinaryTreeFind(root, 'A');
  printf("\n");
  // ������ǰ�����
  printf("������ǰ�����:");
  BinaryTreePrevOrder(root);
  printf("\n");
  // �������������
  printf("�������������:");
  BinaryTreeInOrder(root);
  printf("\n");
  // �������������
  printf("�������������:");
  BinaryTreePostOrder(root);
  printf("\n");
  // �������������
  printf("�������������:");
  BinaryTreeLevelOrder(root);
  printf("\n");
  // �ж϶������Ƿ�����ȫ������
  printf("%d", BinaryTreeComplete(root));
}
