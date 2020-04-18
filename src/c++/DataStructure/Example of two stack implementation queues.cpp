#include <bits/stdc++.h>
using namespace std;

template <class T>
class CQueue
{
private:
    stack<T> stack1;
    stack<T> stack2;

public:
    void appendTail(const T &node);
    T deleteHead();
};

template <class T>
void CQueue<T>::appendTail(const T &node)
{

    stack1.push(node);
}

template <class T>
T CQueue<T>::deleteHead()
{
    if (stack2.size() <= 0)
    {
        while (stack1.size() > 0)
        {
            T &data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }
    if (stack2.size() == 0)
    {
        throw "queue is empty"
    }
    T head = stack2.top();
    stack2.pop();
    return head;
}