#pragma once
#include <bits/stdc++.h>
using namespace std;
#define ARRAY_INIT_SIZE 100 /**/
#define ARRAY_INCREMENT 10

typedef int elemType;

struct myarray
{
    elemType *elem;
    int size;   /*容量*/
    int length; /*实际长度*/
};

bool creatArray(myarray &l)
{
    l.elem = new elemType[ARRAY_INIT_SIZE]();
    if (!l.elem)
    {
        return false; /*分配失败*/
    }
    l.length = 0;
    l.size = ARRAY_INIT_SIZE;
    return true;
}

bool getElem(myarray &l, int i, elemType &return_data)
{
    if (l.length == 0 || i < 1 || i > l.length)
    {
        return false;
    }
    return_data = l.elem[i - 1];
    return true;
}

bool insertFront(myarray &l, int i, elemType data)
{

    if (i < 1 || i > l.length + 1)
    {
        return false;
    }

    if (l.length >= l.size) /*重新开辟空间*/
    {
        elemType *newbase = new elemType[l.length + ARRAY_INCREMENT](); /*增加空间*/
        if (!newbase)
        {
            return false;
        }

        for (int i = 0; i < l.length; i++)
        {
            newbase[i] = l.elem[i];
        }
        delete l.elem; /*删除原来的空间*/
        l.elem = newbase;
        l.size += ARRAY_INCREMENT; /*更新容量*/
    }
    elemType *inser = &l.elem[i - 1]; /*q是插入元素的地址*/
    elemType *p;
    for (p = &(l.elem[l.length - 1]); p >= inser; --p) /*从后往前 元素依次后移*/
        *(p + 1) = *p;
    *inser = data; /*插入数据*/
    ++l.length;
    return true;
}

bool deleteAt(myarray &l, int i, elemType &returnValue)
{

    if (i < 1 || i > l.length)
    {
        return false;
    }
    elemType *p = &l.elem[i]; /*p为被删除元素的后一个的地址*/
    returnValue = *p;
    elemType *rear = l.elem + l.length - 1; /*表尾元素的位置*/
    for (p; p <= rear; ++p)
        *(p - 1) = *p;
    l.length--;
    return true;
}

size_t locateElem(myarray &l, elemType data)
{
    int index = 0;
    bool found = false;
    for (index; index < l.length; index++)
    {
        if (data == l.elem[index])
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        return index + 1;
    }
    else
    {
        return 0;
    }
}

bool printmyarray(myarray &l, int index)
{
    if (index > l.length)
    {
        cout << "index more than array length" << endl;
        return false;
    }

    for (int i = 0; i < index; i++)
    {
        cout << "elem " << i + 1 << " = " << l.elem[i] << endl;
    }
    return true;
}
