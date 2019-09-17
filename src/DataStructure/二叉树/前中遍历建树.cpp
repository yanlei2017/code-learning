#include "BTree.hpp"
using namespace std;
BTree *ConstructTree(int *preorder, int *inorder, int length);
BTree *ConstructCore(int *startPreorder, int *endPreorder, int *startInorder, int *endInorder);

int main(int argc, char const *argv)
{
    int preorder[8] = {1, 2, 4, 7, 3, 5, 6, 8};
    int inorder[8] = {4, 7, 2, 1, 5, 3, 8, 6};
    BTree *root = ConstructTree(preorder, inorder, 8);
    return 0;
}

/********************************************************************************************************************************/
BTree *ConstructTree(int *preorder, int *inorder, int length)
{
    if (preorder == nullptr || inorder == nullptr || length <= 0)
    {
        return nullptr;
    }
    return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}
BTree *ConstructCore(int *startPreorder, int *endPreorder, int *startInorder, int *endInorder)
{
    int rootValue = startPreorder[0]; /*前序遍历的第一个数是根节点*/
    BTree *root = new BTree;
    root->data = rootValue;
    root->lchild = root->rchild = nullptr;
    if (startPreorder == endPreorder) /*只有一个元素的二叉树特殊情况*/
    {
        if (startPreorder == endPreorder && *startPreorder == *endPreorder)
        {
            return root;
        }
        else
        {
            throw "Invalid input.";
        }
    }

    int *rootInorder = startInorder; /*找到根节点在中序遍历中的位置*/
    while (rootInorder <= endInorder && *rootInorder != rootValue)
    {
        ++rootInorder;
    }
    if (rootInorder == endInorder && *rootInorder != rootValue)
    {
        throw "Invalid input.";
        /* code */
    }
    int leftLength = rootInorder - startInorder; /*在中序遍历中找到左子树的长度*//*指针相减=(地址1-地址2)/sizeof(类型)*/
    int *leftPreorderEnd = startPreorder + leftLength;
    if (leftLength > 0)
    {
        root->lchild = ConstructCore(startPreorder + 1, leftPreorderEnd, startInorder, rootInorder - 1);
    }
    if (leftLength < endPreorder - startPreorder)
    {
        root->rchild = ConstructCore(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);
    }
    return root;
}
