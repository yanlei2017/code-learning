/*
通过中序序列和后序序列建树，然后先序遍历输出
输入（第一行为中序，第二行为后序）：
ABCEFGHD
ABFHGEDC
输出：
CBADEGFH

*/
#include <cstdio>
#include <cstdlib>

using namespace std;

const int N = 1010;

typedef struct BTNode *Position;
typedef Position BTree;
struct BTNode
{
    char data;
    Position lChild, rChild;
};

BTree CreateBTree(char inOd[], char postOd[], int n);
void PreOrder(BTree bt);

int main()
{
    char inOd[N], postOd[N];  /* 中序序列与后序序列 */
    int n = 0;
    char ch;
    while ((ch = getchar()) && ch != '\n')
        inOd[n++] = ch;
    n = 0;
    while ((ch = getchar()) && ch != '\n')
        postOd[n++] = ch;

    BTree bt = CreateBTree(inOd, postOd, n);
    PreOrder(bt);
    printf("\n");

    return 0;
}

BTree CreateBTree(char inOd[], char postOd[], int n)
{
    if (n == 0)
        return NULL;

    BTree btRoot = new BTNode;
    btRoot->data = postOd[n-1];     //后序序列最后一个元素一定是根节点
    char lInOd[N], rInOd[N];
    char lPostOd[N], rPostOd[N];
    int n1, n2;
    n1 = n2 = 0;
    //根据根节点将中序序列分为左子树和右子树
    for (int i = 0; i < n; i++)
    {
        if (i <= n1 && inOd[i] != btRoot->data)
            lInOd[n1++] = inOd[i];
        else if (inOd[i] != postOd[n-1])
            rInOd[n2++] = inOd[i];
    }
    //根据一个树的后序序列的长度等于中序序列且后序遍历是先左子树再右子树
    //将后序序列分为左子树和右子树
    int m1, m2;
    m1 = m2 = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (i < n1)
            lPostOd[m1++] = postOd[i];
        else
            rPostOd[m2++] = postOd[i];
    }
    btRoot->lChild = CreateBTree(lInOd, lPostOd, n1);
    btRoot->rChild = CreateBTree(rInOd, rPostOd, n2);
    return btRoot;
}

void PreOrder(BTree bt)
{
    if (bt != NULL)
    {
        printf("%c", bt->data);
        PreOrder(bt->lChild);
        PreOrder(bt->rChild);
    }
}