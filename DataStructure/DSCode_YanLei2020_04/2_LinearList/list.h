/*线性表的实现*/
#ifndef LIST_H_
#define LIST_H_

#include<iostream>
using namespace std;
template <class T> class List
{
    void clear();// 置空线性表 
    bool isEmpty();// 线性表为空时，返回 true 
    bool append(); // 在表尾添加一个元素 value，表的长度增 1 
    bool insert(const int p,const T value);// 在位置 p 上插入一个元素 value，表的长度增 1 
    bool deleteAt(const int p);// 删除位置 p 上的元素，表的长度减 1 
    bool getPos(int &p,const T value);// 查找值为 value 的元素并返回其位置 
    bool getValue(const int p,T & value); // 把位置 p 元素值返回到变量 value 
    bool setValue(const int p,const T value); // 用 value 修改位置 p 的元素值 
};

#endif