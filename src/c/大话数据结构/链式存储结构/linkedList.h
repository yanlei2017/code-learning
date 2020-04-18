#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H
#include <malloc.h>
#define ok 1
#define error 0
#define true 1
#define false 0
typedef int status;
typedef int elemType;
/*
 [可存线性表长度等公共信息|头指针] -> [node 1 | *next ] -> [ node 2 | *next ] -> [ node 3 | *next ]
*/
struct Node
{
    elemType data;
    struct Node *next;
};
typedef struct Node Node;
typedef struct Node *linkList;

status linkGetElem(linkList l, int i, elemType *e)
{
    linkList p = l->next; /*p是节点指针*/
    int j = 1;            /*计数器*/
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
    {
        return error; /*node i not exit */
    }
    *e = p->data;
    return ok;
}
/*在第i个节点之前插入，也就是在第i-1节点之后插入*/
status linkInsert(linkList l, int i, elemType e)
{
    linkList p = l;
    int j = 1;
    while (p && j < i) /*找到i-1节点*/
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
    {
        return error;
    }
    linkList s;
    s = (linkList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next; /*第i个节点的头指针付给新生成的节点*/
    p->next = s;
    return ok;
}
status linkDelete(linkList l, int i, elemType *e)
{
    linkList before, toBeDelete;
    int j = 1;
    before = l;
    while (before->next && j < i) //寻找第i-1个节点，对比linkGetElem函数，这里是让before=l;before指向的是链表的地址
    {
        before = before->next;
        ++j;
    }
    if (!(before->next) || j > i)
    {
        return error;
    }
    toBeDelete = before->next; //before的下一个元素是要删除的
    before->next = toBeDelete->next;
    *e = toBeDelete->data;
    free(toBeDelete);
    return ok;
}
/*建立带表头节点的单链表L 头插法*/
/*[head|next] --- [head=>next|next]*/
/*[head|next] --[p|next]- [head->next|next]*/
void creatLinkListHead(linkList l, int n)
{

    linkList p;
    int i;
    l = (linkList)malloc(sizeof(Node));
    l->next = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (linkList)malloc(sizeof(Node));
        p->data = 0;
        p->next = l->next; /*新节点next指向原本头节点next指向的位置*/
        l->next = p;       /*头节点指向新节点*/
    }
}

void creatLinkListTail(linkList l, int n)
{

    linkList newnode, last;
    l->data = 500;
    l->next = NULL;
    last = l; /*q指向尾部的节点*/
    for (int i = 0; i < n; i++)
    {
        newnode = (linkList)malloc(sizeof(Node));
        newnode->data = 0;
        last->next = newnode; /*尾部next指向新节点*/
        last = newnode;       /*新节点替换为尾部节点*/
    }
    last->next = NULL;
}

status clearList(linkList l)
{
    linkList first, temp;
    first = l->next;
    while (first)
    {
        temp = first->next;
        free(first);
        first = temp;
    }
    l->next = NULL;
    return ok;
}

#endif