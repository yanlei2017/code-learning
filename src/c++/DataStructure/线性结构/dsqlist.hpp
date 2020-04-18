#ifndef DSQLIST_H
#define DSQLIST_H
#include <iostream>
using namespace std;

typedef int elemType;

struct dsqlist
{
    elemType data;
    dsqlist *prev;
    dsqlist *next;
};
bool dsqlistCreatHead(dsqlist *l, const int n)
{
    l->data = 0;
    l->prev = nullptr;
    l->next = nullptr;
    dsqlist *head = l;
    for (int i = 1; i <= n; i++)
    {
        dsqlist *insert = new dsqlist;
        insert->data = i;
        insert->next = insert->prev = nullptr;
        insert->next = head->next;
        if (head->next) /*注意，第一次循环L后面是没有节点的*/
        {
            head->next->prev = insert;
        }
        head->next = insert;
        insert->prev = head;
        l->data++;
    }
}
bool dsqlistCreatTail(dsqlist *l, const int n)
{
    l->data = 0;
    l->prev = nullptr;
    dsqlist *tail = l;
    for (size_t i = 1; i <= n; i++)
    {
        dsqlist *q = new dsqlist;
        q->data = i;
        q->next = q->prev = nullptr;
        q->prev = tail;
        tail->next = q;
        tail = q;
        l->data++;
    }
}

void dsqlistPrint(dsqlist *l)
{
    dsqlist *p = l->next;
    for (size_t i = 0; i < l->data; i++)
    {
        cout << "Node" << i + 1 << " = " << p->data << "; ";
        p = p->next;
    }
    cout << endl;
}

void dsqlistPrintH(const dsqlist *l)
{
    const dsqlist *p = l;
    while (p->next)
    {
        p = p->next;
    }
    for (size_t i = 0; i < l->data; i++)
    {
        cout << "Node" << i + 1 << " = " << p->data << "; ";
        p = p->prev;
    }
    cout << endl;
}

bool dsqlistDelete(dsqlist *l)
{
    if (!l->next && !l->prev)
    {
        return false;
    }

    cout << "deleting dsqlist" << endl;
    dsqlist *p = l->next; /*p points first node*/
    while (p)
    {
        dsqlist *nextToBedelet = p->next;
        delete p;
        p = nextToBedelet;
        l->data--;
    }
    l->next = nullptr;
    cout << endl;
    return true;
}
bool dsqlistDeleteAt(dsqlist *l, const int pos)
{
    if (pos > l->data || pos < 1)
    {
        return false;
    }
    dsqlist *p = l->next;
    for (size_t i = 1; i <= pos; i++)
    {
        p = p->next;
    }
    p->prev->next = p->next;
    p->next->prev = p->prev;
    delete p;
    l->data--;
    return true;
}

bool dsqlistGetelem(dsqlist *l, const int n, elemType &data)
{
    if (!l->next || n > l->data)
    {
        return false;
    }

    cout << "Getting dsqlist's elem" << endl;
    dsqlist *p = l->next; /*p=first node*/
    int index = 1;
    while (index < n && p)
    {
        p = p->next;
        index++;
    }
    data = p->data;
    return true;
}
bool dsqlistGetelemH(dsqlist *l, const int n, elemType &data)
{
    if (!l->next || n > l->data)
    {
        return false;
    }
    dsqlist *p = l;
    while (p->next) /*make p points to tail */
    {
        p = p->next;
    }
    int index = 1;
    while (index < n && p)
    {
        p = p->prev;
        index++;
    }
    data = p->data;
    return true;
}
bool dsqlistInsert(dsqlist *l, int pos, const elemType &data)
{
    dsqlist *p = l->next;
    for (int index = 1; index < pos; index++)
    {
        p = p->next;
    }
    dsqlist *insert = new dsqlist;
    insert->data = data;
    insert->prev = insert->next = nullptr;
    insert->next = p->next;
    insert->prev = p;
    p->next->prev = insert;
    p->next = insert;
    l->data++;
}

bool dsqlistLocate(dsqlist *l, int &pos, const elemType &data)
{
    dsqlist *p = l->next;
    int index = 1;
    bool found = false;
    while (p)
    {
        if (data == p->data)
        {
            found = true;
            break;
        }
        p = p->next;
        index++;
    }
    if (found)
    {
        pos = index;
        return true;
    }
    else
    {
        return false;
    }
}


void dsqlistReverse(dsqlist *l) {/*交换前后指针即可*/
    dsqlist *temp=nullptr;
    dsqlist *current=l->next;/*指向第一个节点*/
    while (current)
    {
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->next;
    }
    // if (temp)
    // {
    //     l=temp->prev;
    // }
}

#endif DSQLIST_H