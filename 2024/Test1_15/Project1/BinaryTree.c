#include "BinaryTree.h"


//通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
  if (a[(*pi)] == '#'  || *pi > n)  //判断是否遍历完成或者遇到#，都返回NULL
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

// 二叉树销毁
void BinaryTreeDestory(BTNode** root);
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
  return root == NULL ? 0 : BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
  if (root == NULL)
    return 0;
  if (root->_left == NULL  && root->_right == NULL)
    return 1;
  return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
  if (root == NULL || k < 1)
    return 0;
  if (k == 1)
    return 1;

  return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
  
  // 如果当前节点为空，返回 NULL。这意味着我们已经到达树的末端或者树本身为空。
  if (root == NULL)
    return NULL;

  // 如果当前节点的值等于要查找的值 x，返回当前节点的指针。
  if (root->_data == x)
    printf("找到了它是：%c",root->_data);
  else
    printf("没有找到！", root->_data);
    return root;

  // 在左子树中递归查找值为 x 的节点。
  BTNode* leftResult = BinaryTreeFind(root->_left, x);

  // 如果在左子树中找到了这个值，返回该节点的指针。
  if (leftResult != NULL)
    return leftResult;

  // 如果左子树中没有找到，继续在右子树中递归查找。
  return BinaryTreeFind(root->_right, x);
}

// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
    if (root == NULL)
      return NULL;

    printf("%c ", root->_data);
    BinaryTreePrevOrder(root->_left);
    BinaryTreePrevOrder(root->_right);
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
    if (root == NULL)
      return NULL;

    BinaryTreeInOrder(root->_left);
    printf("%c ", root->_data);
    BinaryTreeInOrder(root->_right);
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
    if (root == NULL)
      return NULL;
    BinaryTreePostOrder(root->_left);
    BinaryTreePostOrder(root->_right);
    printf("%c ", root->_data);

}


// 层序遍历
void BinaryTreeLevelOrder(BTNode* root) {
  if (root == NULL) 
    return; // 如果树为空，则直接返回
  

  Queue q;
  QInit(&q); // 初始化队列
  QPush(&q, root); // 将根节点入队

  while (!QueueEmpty(&q))
  {
    BTNode* front = QueueFront(&q); // 取得队首元素
    QPop(&q); // 将队首元素出队

    // 处理当前节点，例如打印节点的值
    printf("%c ", front->_data);

    if (front->_left != NULL) {
      QPush(&q, front->_left); // 将左子节点入队
    }
    if (front->_right != NULL) {
      QPush(&q, front->_right); // 将右子节点入队
    }
  }

  QDestroy(&q); // 销毁队列，释放资源
}


// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root) {
  if (root == NULL) {
    return 1; // 空树认为是完全二叉树
  }

  Queue q;
  QInit(&q);
  QPush(&q, root);
  int level = 0; // 记录层级
  bool mustBeLeaf = false; // 标记是否必须为叶子节点

  while (!QueueEmpty(&q)) {
    int size = QueueSize(&q); // 当前层的节点数
    level++;
    for (int i = 0; i < size; i++) {
      BTNode* front = QueueFront(&q);
      QPop(&q);

      // 如果标记为必须是叶子节点，但当前节点不是叶子节点，则不是完全二叉树
      if (mustBeLeaf && (front->_left != NULL || front->_right != NULL)) {
        return 0;
      }

      // 如果当前节点有右孩子但没有左孩子，则不是完全二叉树
      if (front->_left == NULL && front->_right != NULL) {
        return 0;
      }

      if (front->_left != NULL) {
        QPush(&q, front->_left);
      }
      else {
        // 如果左孩子为空，则后面的节点都必须是叶子节点
        mustBeLeaf = true;
      }

      if (front->_right != NULL) {
        QPush(&q, front->_right);
      }
      else {
        // 如果右孩子为空，则后面的节点都必须是叶子节点
        mustBeLeaf = true;
      }
    }
  }

  QDestroy(&q);
  return 1; // 遍历结束没有发现违反完全二叉树的规则，返回1
}

