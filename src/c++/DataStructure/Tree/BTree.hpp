#ifndef BITNODE_H__
#define BITNODE_H__
#include <bits/stdc++.h>>
using namespace std;
typedef char elemType;
struct BTree
{
    elemType data;
    BTree *lchild;
    BTree *rchild;
};
/*根左右 前序遍历*/
void PreOrder(BTree *t)
{

    if (t == nullptr)
    {
        return;
    }
    cout << t->data;
    PreOrder(t->lchild);
    PreOrder(t->rchild);
}
/*左根右 中序遍历*/
void InOrder(BTree *t)
{

    if (t == nullptr)
    {
        return;
    }
    InOrder(t->lchild);
    cout << t->data;
    InOrder(t->rchild);
}
/*左右根 后序遍历*/
void PostOrder(BTree *t)
{

    if (t == nullptr)
    {
        return;
    }
    PostOrder(t->lchild);
    PostOrder(t->rchild);
    cout << t->data;
}
/*前序遍历方式 建立二叉树*/
BTree *CreatBinTree()
{
    BTree *bt = nullptr;
    elemType ch;
    scanf("%c", &ch);
    if (ch == '#')
    {
        bt = nullptr;
    }
    else
    {
        bt = new BTree;
        if (!bt)
        {
            return nullptr;
        }
        bt->data = ch;
        bt->lchild = CreatBinTree();
        bt->rchild = CreatBinTree();
    }
    return bt;
}
#endif