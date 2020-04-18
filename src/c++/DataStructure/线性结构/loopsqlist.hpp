#ifndef LOOPSQLIST_H_
#define LOOPSQLIST_H_
#include <iostream>
using namespace std;
typedef int elemType;
struct loopsqlist
{
    elemType data;
    loopsqlist *next;
};

/*循环链表和单链表的差异就在于循环的判断条件上，原来是判断p->next==nullptr现在是判断p->next==head(头结点)*/

bool creatLoopsqlist(loopsqlist *l, int n)
{

    l->data = 0;
    loopsqlist *p;
    loopsqlist *tail = l;
    for (int i = 0; i < n; i++)
    {
        p = new loopsqlist;
        p->data = i + 1;
        tail->next = p;
        tail = p;
        l->data++;
    }
    tail->next = l; /*尾指针=头指针*/
}

loopsqlist &mergeloolSqlist(loopsqlist *a, loopsqlist *b)
{

    loopsqlist *rearA = a->next, *rearB = b->next;
    for (int i = 1; i < a->data; i++) /*找到各自的尾节点*/
    {
        rearA = rearA->next;
    }
    for (int i = 1; i < b->data; i++)
    {
        rearB = rearB->next;
    }

    rearA->next = rearB->next->next; /*b的第一个节点的地址给到a的尾节点下一个*/
    rearB->next = a;/*B的尾巴=A的头部*/
    return *a;
}

bool printloopsqlist(loopsqlist *l)
{
    loopsqlist *p = l->next;
    while (p != l)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl
         << "finish print" << endl;
}

#endif