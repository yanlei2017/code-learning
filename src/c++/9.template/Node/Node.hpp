#pragma once

template <class T>
class Node
{
private:
    Node<T> *next;

public:
    T data;

    Node(const T &d, Node<T> *n = nullptr); //默认参数写在结尾,写在声明
    void insertAfter(Node<T> *p);           //insert a node after current node
    Node<T> *deleteAfter();                 //delete next node and return current node addr
    Node<T> *nextNode();                    // get next node's addr
    const Node<T> *nextNode() const;
};

template <class T>
Node<T>::Node(const T &d, Node<T> *n) : next(n), data(d)
{
}

template <class T>
void Node<T>::insertAfter(Node<T> *p)
{
    p->next = this->next; //p结点指针域指向当前结点的后继结点 
    this->next = p;       //当前结点的指针域指向p
}

template <class T>
Node<T> *Node<T>::deleteAfter()
{
    Node<T> *tempPtr = this->next; //当前节点的下一个节点（当前节点存储的next）是要删除的，将欲删除的结点地址(next)存储到tempPtr中
    if (this->next == 0)           //如果当前结点没有后继结点,则返回空指针
        return 0;
    next = tempPtr->next; //使当前结点的指针域指向欲删除结点的后继结点
    return tempPtr;       //返回被删除了的结点的地址
}

template <class T>
Node<T> *Node<T>::nextNode()
{
    return next;
}

template <class T>
const Node<T> *Node<T>::nextNode() const
{
    return next;
}