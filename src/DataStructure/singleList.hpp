/*单向链表*/
template <class T>
class Node
{
private:
    T data;
    Node<T> *next;

public:
    Node(int n=0, Node<T> *ptr = nullptr);
    ~Node();
    bool getElem(Node<T> *head, int i, T *result);
    bool insert(Node<T> *head, int i, T data);
    bool delete_Node(Node<T> *head, int i, T *data);
};

template <class T> //取i节点处的数据
bool Node<T>::getElem(Node<T> *head, int i, T *result)
{
    int j;
    Node<T> *p;
    p = head->next; //p指向第一个节点
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
    {
        return false;
    }
    *result = p->data;
    return true;
}

template <class T> //在i位置插如一个节点
bool Node<T>::insert(Node<T> *head, int i, T data)
{
    int j;
    Node<T> *p;
    Node<T> *s;
    p = head;
    j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
    {
        return false;
    }
    s = new Node<T>(data, p->next);
    p->next = s;
    return true;
}

template <class T> //删除第i个节点
bool Node<T>::delete_Node(Node<T> *head, int i, T *data)
{

    int j;
    Node<T> *p;
    Node<T> *q;
    p = head;
    j = 1;
    while (p->next && j < i) //寻找到i-1个节点,p指向第i-1个节点的next指针
    {
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i)
    {
        return false;
    }

    q = p->next;       //此时q指向要删除的第i个节点
    p->next = q->next; //i的next赋值给i-1的next
    *data = q->data;   //i的data给到 *data
    delete q;
    return true;
}

template <class T>
Node<T>::Node(int n,Node<T> * ptr)
{
    Node<T> *p;
    Node<T> *r;
    int i;
    this = new Node<T>(n,nullptr);
    r = this; //r是指向尾部的节点
    for (i = 0; i < n; i++)
    {
        p = new Node<T>(1);
        r->next = p; //表尾指向新节点
        r = p;       //新节点定义为表尾
    }
    r->next = nullptr;
}

template <class T>
Node<T>::~Node()
{
    Node<T> *p;
    Node<T> *q;
    p = this->next; //p指向第一个节点
    while (p)
    {
        q = p->next; //记住下一个节点的地址
        delete p;    //删除当前节点
        p = q;       //下一节点的地址重新赋值给p
    }
    this->next = nullptr;
}