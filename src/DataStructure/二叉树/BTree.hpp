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