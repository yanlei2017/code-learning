#ifndef __SQliST_H_
#define __SQliST_H_
#include <iostream>
using namespace std;
typedef int elemType;

struct sqlist
{
    elemType data;
    sqlist *next;
};

bool creatSqlistHead(sqlist *l, int n)
{
    l->data = 0;
    l->next = nullptr;
    sqlist *p;
    for (int i = 0; i < n; i++)
    {
        p = new sqlist;
        p->data = i + 1;
        p->next = l->next;
        l->next = p;
        l->data++;
    }
}

bool creatSqlistTail(sqlist *l, int n)
{

    l->data = 0;
    l->next = nullptr;
    sqlist *p, *tail;
    tail = l;
    for (int i = 0; i < n; i++)
    {
        p = new sqlist;
        p->data = i + 1;
        tail->next = p;
        tail = p;
        l->data++;
    }
    tail->next = nullptr;
}

bool clearSqlist(sqlist *l)
{

    sqlist *p = l->next; /*p指向第一个节点*/
    while (p)
    {
        sqlist *q = p->next;
        delete p;
        p = q;
    }
    l->next = nullptr;
    return true;
}

void printsqlist(sqlist *l)
{

    sqlist *p = l->next;
    int j = 1;
    while (p && j <= l->data)
    {
        cout << "node" << j++ << " = " << p->data << endl;
        p = p->next;
    }
}

bool getelem(sqlist *l, int i, elemType &returnvalue)
{
    if (i < 1 || i > l->data)
    {
        return false;
    }
    sqlist *p = l->next;
    int index = 1;
    while (p && index < i)
    {
        p = p->next;
        index++;
    }
    if (!p || index > i)
    {
        return false;
    }

    returnvalue = p->data;
    return true;
}

bool insertFront(sqlist *l, int i, elemType data)
{

    // if (i > l->data)
    // {
    //     cout << "insert pos great than sqlist's length " << endl;
    //     return false;
    // }
    if (i < 1)
    {
        cout << "error insert positon,ensure insert pos >1" << endl;
    }
    sqlist *p = l->next;
    int index = 1;
    while (p && index < i - 1)
    {
        p = p->next;
        index++;
    }

    sqlist *temp = new sqlist;
    temp->data = data;
    temp->next = p->next;
    p->next = temp;
    l->data++;
    return true;
}

bool sqlistDelete(sqlist *l, int i, elemType &data)
{

    if (i < 0 || i > l->data)
    {
        cerr << "wront delete pos" << endl;
        return false;
    }
    sqlist *p = l->next;
    int index = 1;
    while (p && index < i - 1)
    {
        p = p->next;
        index++;
        /* code */
    }
    if (!p->next || index > i)
    {
        return false;
    }

    sqlist *tobedelete = p->next;
    data = tobedelete->data;
    p->next = tobedelete->next;
    delete tobedelete;
    l->data--;
    return true;
}

sqlist *reverseSqlist(sqlist *l)
{
    sqlist *p = l->next;
    sqlist *r = new sqlist;
    r->data = 0;
    r->next = nullptr;
    sqlist *rhead = r;
    for (size_t i = 1; i <= l->data; i++)
    {
        sqlist *q = new sqlist;
        q->data = p->data;
        q->next = r->next;
        r->next = q;
        p = p->next;
        r->data++;
    }
    return r;
}

void reverseSqlistWithHead(sqlist *head)
{
    if (head == nullptr || head->next == nullptr)
        return;

    sqlist *curr = head->next;
    sqlist *prev = nullptr;
    while (curr != nullptr)
    {
        sqlist *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head->next = prev;
}

/*递归翻转*/

sqlist *reverse(sqlist *head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    sqlist *newhead = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newhead->next;
}

#endif __SQliST_H_