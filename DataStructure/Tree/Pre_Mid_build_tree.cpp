
/*前序 中序 建树*/
#include "BTree.hpp"
using namespace std;
BTree *ConstructTree(int *preorder, int *inorder, int length);
BTree *ConstructCore(int *startPreorder, int *endPreorder, int *startInorder,
                     int *endInorder);

int main(int argc, char const *argv) {
  int preorder[8] = {1, 2, 4, 7, 3, 5, 6, 8};
  int inorder[8] = {4, 7, 2, 1, 5, 3, 8, 6};
  BTree *root = ConstructTree(preorder, inorder, 8);
  return 0;
}
/*
                       1
                  2         3
                4        5     6
                  7          8

*/
/********************************************************************************************************************************/
BTree *ConstructTree(int *preorder, int *inorder, int length) {
  if (preorder == nullptr || inorder == nullptr || length <= 0) {
    return nullptr;
  }
  return ConstructCore(preorder, preorder + length - 1, inorder,
                       inorder + length - 1);
}
/*
para brief
startPreorder  前序遍历起始地址
endPreorder    前序遍历结束地址
startInorder   中序遍历起始地址
endInorder     中序遍历起始地址
*/
BTree *ConstructCore(int *startPreorder, int *endPreorder, int *startInorder,
                     int *endInorder) {
  /*初始化根节点前序遍历的第一个数是根节点*/
  int rootValue = startPreorder[0];
  BTree *root = new BTree;
  root->data = rootValue;
  root->lchild = root->rchild = nullptr;

  /*只有一个元素的二叉树特殊情况，递归结束条件*/
  if (startPreorder == endPreorder) {
    if (startPreorder == endPreorder && *startPreorder == *endPreorder) {
      return root;
    } else {
      throw "Invalid input.";
    }
  }

  /*找到根节点在中序遍历中的位置*/
  int *rootInorder = startInorder;
  while (rootInorder <= endInorder && *rootInorder != rootValue) {
    ++rootInorder;
  }

  /*找到中序遍历结果的尾部都没有找到前序遍历中的根节点*/
  if (rootInorder == endInorder && *rootInorder != rootValue) {
    throw "Invalid input.";
  }

  /*在中序遍历中找到左子树的长度*/ /*指针相减=(地址1-地址2)/sizeof(类型)*/
  int leftLength = rootInorder - startInorder;

  /*左子树前序遍历结束的地方*/
  int *leftPreorderEnd = startPreorder + leftLength;

  /*递归建立根节点的左子树*/
  if (leftLength > 0) {
    root->lchild = ConstructCore(startPreorder + 1, leftPreorderEnd,
                                 startInorder, rootInorder - 1);
  }
  
  /*递归建立根节点的右子树*/
  if (leftLength < endPreorder - startPreorder) {
    root->rchild = ConstructCore(leftPreorderEnd + 1, endPreorder,
                                 rootInorder + 1, endInorder);
  }
  return root;
}
