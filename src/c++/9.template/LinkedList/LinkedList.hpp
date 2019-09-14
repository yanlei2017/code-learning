#pragma once
#include "../Node/Node.hpp"
using namespace std;

template <class T>
class LinkedList
{
private:
    Node<T> *front, *rear;                                       //表头和表尾指针
    Node<T> *prevPtr, *currPtr;                                  //currPtr当前遍历位置的指针,prevPtr当前指针的前一个指针由插入和删除操作更新
    int size;                                                    //表中的元素个数
    int position;                                                //当前元素在表中的位置序号。由函数reset使用
    Node<T> *newNode(const T &item, Node<T> *ptrNext = nullptr); //生成新结点,数据域为item,指针域为ptrNext
    void freeNode(Node<T> *p);                                   //释放结点
    void copy(const LinkedList<T> &L);
    /*私有函数，有复制构造函数和operator=调用,避免代码的冗余，保证复制的一致性，
将链表L拷贝到当前表(假设当前表为空),被拷贝构造函数、operator = 调用*/
public:
    LinkedList();
    LinkedList(const LinkedList<T> &L);
    ~LinkedList();
    LinkedList<T> &operator=(const LinkedList<T> &L); //重载赋值运算符
    int getSize() const;                              //返回链表中元素个数
    bool isEmpty() const;                             //链表是否为空
    void reset(int pos = 0);                          //初始化游标的位置
    void next();                                      //使游标移动到下一个结点
    bool endOfList() const;                           //游标是否到了链尾
    int currentPosition() const;                      //返回游标当前的位置
    void insertFront(const T &data);                  //在表头插入结点
    void insertRear(const T &data);                   //在表尾添加结点
    void insertAt(const T &data);                     //在当前结点之前插入结点
    void insertAfter(const T &data);                  //在当前结点之后插入结点
    T deleteFront();                                  //删除头结点
    void deleteCurrent();                             //删除当前结点
    T &data();                                        //返回对当前结点成员数据的引用
    const T &data() const;                            //返回对当前结点成员数据的常引用
    void clear();                                     //清空链表:释放所有结点的内存空间。被析构函数、operator= 调用
};

template <class T> //生成新结点
Node<T> *LinkedList<T>::newNode(const T &item, Node<T> *ptrNext)
{
    Node<T> *p;
    p = new Node<T>(item, ptrNext);
    if (p == nullptr)
    {
        cout << "Memory allocation failure!\n";
        exit(1);
    }
    return p;
}

template <class T>
void LinkedList<T>::freeNode(Node<T> *p) { delete p; }

template <class T> //链表复制函数，将链表L 拷贝到当前表(假设当前表为空)，复制构造函数、operator = 调用
void LinkedList<T>::copy(const LinkedList<T> &L)
{
    Node<T> *p = L.front;
    while (p != nullptr) //将L中的每一个元素插入到当前链表最后
    {
        insertRear(p->data);
        p = p->nextNode();
    }
    if (position == -1)
    {
        return;
    }
    //在新链表中重新设置prevPtr和currPtr
    prevPtr = nullptr;
    currPtr = front;
    for (int pos = 0; pos != position; pos++) //?这里为什么还要遍历一遍？
    {
        prevPtr = currPtr;
        currPtr = currPtr->nextNode();
    }
}

template <class T> //constructor
LinkedList<T>::LinkedList() : front(nullptr),
                              rear(nullptr),
                              prevPtr(nullptr),
                              currPtr(nullptr),
                              size(0),
                              position(-1)
{
}

template <class T> //copy constructor
LinkedList<T>::LinkedList(const LinkedList<T> &L)
{
    front = rear = nullptr;
    prevPtr = currPtr = nullptr;
    size = 0;
    position = -1;
    copy(L);
}

template <class T>
LinkedList<T>::~LinkedList()
{
    clear();
}

template <class T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &L)
{
    if (this == &L)
    {
        return *this;
    }
    clear();
    copy(L); //这里的L曾经写掉了
    return *this;
}

template <class T>
int LinkedList<T>::getSize() const
{
    return size;
}

template <class T>
bool LinkedList<T>::isEmpty() const
{
    return size == 0;
}

template <class T>
void LinkedList<T>::reset(int pos) //将链表当前位置设置为pos
{
    int startPos;
    if (front == nullptr) // 如果链表为空,返回
    {
        return;
    }
    if (pos < 0 || pos > size - 1)
    {
        cerr << "Reset: Invalid list position: " << pos << endl;
        return;
    }
    if (pos == 0) // 如果pos为0,将指针重新设置到表头
    {
        prevPtr = nullptr;
        currPtr = front;
        position = 0;
    }
    else
    { // 重新设置 currPtr, prevPtr, 和 position
        currPtr = front->nextNode();
        prevPtr = front;
        startPos = 1;
        for (position = startPos; position != pos; position++) //?这里为什么还要遍历一遍？
        {
            prevPtr = currPtr;
            currPtr = currPtr->nextNode();
        }
    }
}

template <class T> //使游标移动到下一个结点
void LinkedList<T>::next()
{
    if (currPtr != nullptr)
    {
        prevPtr = currPtr;
        currPtr = currPtr->nextNode();
        position++;
    }
}

template <class T>
bool LinkedList<T>::endOfList() const
{
    return currPtr == nullptr;
}

template <class T>

int LinkedList<T>::currentPosition() const
{
    return position;
}

template <class T>
void LinkedList<T>::insertFront(const T &data)
{
    if (front != nullptr)
        reset();
    insertAt(data);
}

template <class T> // 在表尾插入结点
void LinkedList<T>::insertRear(const T &data)
{
    Node<T> *temp;
    prevPtr = rear;
    temp = newNode(data);
    if (rear == nullptr) // 如果表空则插入在表头
    {
        front = rear = temp;
    }
    else
    {
        rear->insertAfter(temp); //在尾部插入temp
        rear = temp;
    }
    currPtr = rear;
    position = size;
    size++;
}

template <class T>
void LinkedList<T>::insertAt(const T &data)
{
    Node<T> *temp;
    if (prevPtr == nullptr) // 插入在链表头,包括将结点插入到空表中
    {
        temp = newNode(data, front);
        front = temp;
    }
    else // 插入到链表之中. 将结点置于prevPtr之后
    {
        temp = newNode(data);
        prevPtr->insertAfter(temp);
    }
    if (prevPtr == rear) //正在向空表中插入,或者是插入到非空表的表尾
    {
        rear = temp;
        position = size;
    }
    currPtr = temp;
    size++;
}

template <class T> //在当前结点之后插入结点
void LinkedList<T>::insertAfter(const T &data)
{
    Node<T> *p;
    p = newNode(data);
    if (front == nullptr) // 向空表中插入
    {
        front = currPtr = rear = p;
        position = 0;
    }
    else
    { // 插入到最后一个结点之后
        if (currPtr == nullptr)
            currPtr = prevPtr;
        currPtr->insertAfter(p);
        if (currPtr == rear) //插入在尾部
        {
            rear = p;
            position = size;
        }
        else
        { //插入在中间
            position++;
            prevPtr = currPtr;
            currPtr = p;
        }
        size++;
    }
}

template <class T>
T LinkedList<T>::deleteFront() // 删除表头结点
{
    T item;
    reset();
    if (front == nullptr)
    {
        cerr << "Invalid deletion!" << endl;
        exit(1);
    }
    item = currPtr->data;
    deleteCurrent();
    return item;
}

template <class T>
void LinkedList<T>::deleteCurrent()
// 删除链表当前位置的结点
{
    Node<T> *p;
    if (currPtr == nullptr)
    // 如果表空或达到表尾则出错
    {
        cerr << "Invalid deletion!" << endl;
        exit(1);
    }
    if (prevPtr == nullptr)
    // 删除将发生在表头
    {
        p = front;
        // 保存头结点地址
        front = front->nextNode();
        //将其从链表中分离
    }
    else //删除将发生在表头链表中
        //分离prevPtr之后的一个内部结点,保存其地址
        p = prevPtr->deleteAfter();
    if (p == rear)
    // 如果表尾结点被删除
    {
        rear = prevPtr;
        //新的表尾是prevPtr
        position--; //position自减
    }
    currPtr = p->nextNode(); //当前节点等与被删除节点的后继节点
    freeNode(p);
    // 使currPtr越过被删除的结点
    // 释放被删除的结点
    size--; //使链表长度自减
}

template <class T>
T &LinkedList<T>::data() //返回一个当前结点数值的引用
{
    if (size == 0 || currPtr == nullptr)
    // 如果链表为空或已经完成遍历则出错
    {
        cerr << "Data: invalid reference!" << endl;
        exit(1);
    }
    return currPtr->data;
}

template <class T>
void LinkedList<T>::clear()
{
    //清空链表
    Node<T> *currPosition, *nextPosition;
    currPosition = front;
    while (currPosition != nullptr)
    {
        nextPosition = currPosition->nextNode(); //取得下一结点的地址
        freeNode(currPosition);                  //删除当前结点
        currPosition = nextPosition;
        //当前指针移动到下一结点
    }
    front = rear = nullptr;
    prevPtr = currPtr = nullptr;
    size = 0;
    position = -1;
}