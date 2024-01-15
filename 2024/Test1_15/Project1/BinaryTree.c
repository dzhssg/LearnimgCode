#include "BinaryTree.h"


//ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
  if (a[(*pi)] == '#'  || *pi > n)  //�ж��Ƿ������ɻ�������#��������NULL
  {
    (*pi)++;
    return NULL;
  }

  BTNode* root = (BTNode*)malloc(sizeof(BTNode));
  root->_data = a[*pi];
  (*pi)++;
  root->_left = BinaryTreeCreate(a, n, pi);
  root->_right = BinaryTreeCreate(a, n, pi);
  return root;
}

// ����������
void BinaryTreeDestory(BTNode** root);
// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
  return root == NULL ? 0 : BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
  if (root == NULL)
    return 0;
  if (root->_left == NULL  && root->_right == NULL)
    return 1;
  return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
  if (root == NULL || k < 1)
    return 0;
  if (k == 1)
    return 1;

  return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
  
  // �����ǰ�ڵ�Ϊ�գ����� NULL������ζ�������Ѿ���������ĩ�˻���������Ϊ�ա�
  if (root == NULL)
    return NULL;

  // �����ǰ�ڵ��ֵ����Ҫ���ҵ�ֵ x�����ص�ǰ�ڵ��ָ�롣
  if (root->_data == x)
    printf("�ҵ������ǣ�%c",root->_data);
  else
    printf("û���ҵ���", root->_data);
    return root;

  // ���������еݹ����ֵΪ x �Ľڵ㡣
  BTNode* leftResult = BinaryTreeFind(root->_left, x);

  // ��������������ҵ������ֵ�����ظýڵ��ָ�롣
  if (leftResult != NULL)
    return leftResult;

  // �����������û���ҵ����������������еݹ���ҡ�
  return BinaryTreeFind(root->_right, x);
}

// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
    if (root == NULL)
      return NULL;

    printf("%c ", root->_data);
    BinaryTreePrevOrder(root->_left);
    BinaryTreePrevOrder(root->_right);
}
// �������������
void BinaryTreeInOrder(BTNode* root)
{
    if (root == NULL)
      return NULL;

    BinaryTreeInOrder(root->_left);
    printf("%c ", root->_data);
    BinaryTreeInOrder(root->_right);
}
// �������������
void BinaryTreePostOrder(BTNode* root)
{
    if (root == NULL)
      return NULL;
    BinaryTreePostOrder(root->_left);
    BinaryTreePostOrder(root->_right);
    printf("%c ", root->_data);

}


// �������
void BinaryTreeLevelOrder(BTNode* root) {
  if (root == NULL) 
    return; // �����Ϊ�գ���ֱ�ӷ���
  

  Queue q;
  QInit(&q); // ��ʼ������
  QPush(&q, root); // �����ڵ����

  while (!QueueEmpty(&q))
  {
    BTNode* front = QueueFront(&q); // ȡ�ö���Ԫ��
    QPop(&q); // ������Ԫ�س���

    // ����ǰ�ڵ㣬�����ӡ�ڵ��ֵ
    printf("%c ", front->_data);

    if (front->_left != NULL) {
      QPush(&q, front->_left); // �����ӽڵ����
    }
    if (front->_right != NULL) {
      QPush(&q, front->_right); // �����ӽڵ����
    }
  }

  QDestroy(&q); // ���ٶ��У��ͷ���Դ
}


// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root) {
  if (root == NULL) {
    return 1; // ������Ϊ����ȫ������
  }

  Queue q;
  QInit(&q);
  QPush(&q, root);
  int level = 0; // ��¼�㼶
  bool mustBeLeaf = false; // ����Ƿ����ΪҶ�ӽڵ�

  while (!QueueEmpty(&q)) {
    int size = QueueSize(&q); // ��ǰ��Ľڵ���
    level++;
    for (int i = 0; i < size; i++) {
      BTNode* front = QueueFront(&q);
      QPop(&q);

      // ������Ϊ������Ҷ�ӽڵ㣬����ǰ�ڵ㲻��Ҷ�ӽڵ㣬������ȫ������
      if (mustBeLeaf && (front->_left != NULL || front->_right != NULL)) {
        return 0;
      }

      // �����ǰ�ڵ����Һ��ӵ�û�����ӣ�������ȫ������
      if (front->_left == NULL && front->_right != NULL) {
        return 0;
      }

      if (front->_left != NULL) {
        QPush(&q, front->_left);
      }
      else {
        // �������Ϊ�գ������Ľڵ㶼������Ҷ�ӽڵ�
        mustBeLeaf = true;
      }

      if (front->_right != NULL) {
        QPush(&q, front->_right);
      }
      else {
        // ����Һ���Ϊ�գ������Ľڵ㶼������Ҷ�ӽڵ�
        mustBeLeaf = true;
      }
    }
  }

  QDestroy(&q);
  return 1; // ��������û�з���Υ����ȫ�������Ĺ��򣬷���1
}

