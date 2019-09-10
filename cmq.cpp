#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
// #define N 10
using namespace std;

#define MAX 100
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} BTnode;
BTnode *deal(vector<int> a, int n)
{
    int i;
    BTnode *root;
    BTnode *queue[11];
    int front = 0, rear = 0; //按层，使用队列
    for (i = 0; i < n; i++)
    {
        /*初始化新节点*/
        BTnode *t = (BTnode *)malloc(sizeof(BTnode));
        t->left = t->right = NULL;
        t->data = a[i];
        /*入队*/
        queue[++rear] = t;
        if (i == 0)
        {
            root = t;
        }
        else
        {
            if (!queue[rear / 2]->left)
            {
                queue[rear / 2]->left = t;
            }
            else
            {
                queue[rear / 2]->right = t;
                front++;
            }
        }
    }
    return root;
}
/*按层输出二叉树*/
void PrintTree(BTnode *root)
{
    BTnode *t = NULL;
    BTnode *queue[MAX];
    int front = 0, rear = 0;
    /*入队*/
    queue[++rear] = root;
    /*出队*/
    while (front != rear)
    {
        t = queue[++front];
        printf("%d", t->data);
        if (t->left)
            queue[++rear] = t->left;
        if (t->right)
            queue[++rear] = t->right;
    }
}

void InOrder(BTnode *T) //中序遍历
{
    if (!T)
        return;
    InOrder(T->left);
    printf("%d", T->data);
    InOrder(T->right);
}
int main(void)
{
    int N;
    cin >> N;
    int i = 0;
    vector<int> a;
    // int a[]={1,3,5,7,9,2,4,6,8,10};
    int temp = 0;
    while (cin >> temp)
    {
        a.push_back(temp);
    }

    BTnode *root = NULL;
    root = deal(a, N);
    InOrder(root);
    printf("\n");

    return 0;
}