
/*链表的实现，链表分为单链，双链，循环链 */
#ifndef LINK_LIST_H
#define LINK_LIST_H
#include "link.h"
#include "list.h"
/*单链表的结点类型 ，*/

template <class T>
class linkList : public List<T> {
 private:
  Link<T> *head, *tail;  // 单链表的头、尾指针
  void setPos(
      const int p,
      Link<T> **node);  // 第p个元素指针，应写成私有函数，不然会造成类的内存泄漏

 public:
  linkList(int num);           // 构造函数
  ~linkList();                 // 析构函数
  bool isEmpty();              // 判断链表是否为空
  void clear();                // 将链表存储的内容清除，成为空表
  int length();                // 返回此顺序表的当前实际长度
  bool append(const T value);  // 表尾添加一个元素 value，表长度增 1
  bool insert(const int p, const T value);  // 位置 p 上插入一个元素
  bool deleteAt(const int p);  // 删除位置 p 上的元素，表的长度减 1
  bool getValue(const int p, T &value);  // 返回位置 p 的元素值
  bool getPos(int &p, const T value);    // 查找值为 value 的元素
  void printLinkList();
  void up(int num);  // data递增用于测试
};

template <class T>
void linkList<T>::setPos(const int p, Link<T> **node) {
  if (p == -1) {
    *node = head;
    return;
  }
  Link<T> *tmp = head;
  int index = 0;
  while (index < p) {
    tmp = tmp->next;
    index++;
  }
  *node = tmp;
  return;
}

template <class T>
linkList<T>::linkList(int num) {
  Link<T> *tmp;
  try {
    head = new Link<T>(0);
    tmp = head;
    int i = 0;
    while (i < num) {
      tmp->next = new Link<T>(0);
      tmp = tmp->next;
      i++;
    }
    tail = tmp;
  } catch (const std::bad_alloc &e) {
    std::cerr << e.what() << '\n';
  }
}

template <class T>
linkList<T>::~linkList() {
  clear();
}

template <class T>
bool linkList<T>::isEmpty() {
  bool isEmpty;
  if (head == nullptr && tail == nullptr)
    isEmpty = true;
  else
    isEmpty = false;
  return isEmpty;
}

template <class T>
void linkList<T>::clear() {
  if (!isEmpty()) {
    cout << "clear linklist" << endl;
    Link<T> *tmp = head;
    Link<T> *del;
    while (tmp->next) {
      del = tmp;       /*记录当前要删除的*/
      tmp = tmp->next; /*下一个要删除的*/
      delete del;      /*删除当前的*/
    }
    delete tail;
    head = tail = nullptr;
  } else {
    cout << "Linklist is empty, no need to clear !" << endl;
  }
}

template <class T>
int linkList<T>::length() {
  int len = 1;
  Link<T> *tmp = head;
  while (tmp->next) {
    len++;
    tmp = tmp->next;
  }
  return len;
}

template <class T>
bool linkList<T>::append(const T value) {
  cout << "Append " << value << endl;
  if (tail) {
    try {
      Link<T> *p = new Link<T>(value);
      tail->next = p;
      tail = tail->next;
      return true;
    } catch (const bad_alloc &e) {
      cout << e.what() << endl;
      return false;
    }
  } else {
    tail = new Link<T>(value);
    head = tail;
    return true;
  }
}

template <class T>
bool linkList<T>::insert(const int p, const T value) {
  int len = length();
  if (p < 0 || p > len) {
    cout << "Bad insert pos , insert fail !" << endl;
    return false;
  }
  int index = 0;
  Link<T> *tmp = head;
  while (index++ < p - 1) {
    tmp = tmp->next;
  }
  Link<T> *t = tmp->next;
  try {
    tmp->next = new Link<T>(value, t);
  } catch (const std::bad_alloc &e) {
    std::cerr << e.what() << '\n';
  }
  return true;
}

template <class T>
bool linkList<T>::deleteAt(const int p) {
  int len = length();
  if (p < 0 || p > len) {
    cout << "Bad delete pos , delete fail !" << endl;
    return false;
  }
  Link<T> *tmp = head;
  int index = 0;
  while (index++ < p - 1) {
    tmp = tmp->next;
  }
  Link<T> *del = tmp->next;
  tmp->next = del->next;
  delete del;
  return true;
}

template <class T>
bool linkList<T>::getValue(const int p, T &value) {
  int len = length();
  if (p < 0 || p > len) {
    cout << "Bad  pos , get Value fail !" << endl;
    return false;
  }
  Link<T> *tmp = head;
  int index = 0;
  while (index++ < p) {
    tmp = tmp->next;
  }
  value = tmp->data;
  return true;
}

template <class T>
bool linkList<T>::getPos(int &p, const T value) {
  Link<T> *tmp = head;
  int pos = 0;
  while (tmp->data != value) {
    tmp = tmp->next;
    pos++;
  }
  p = pos;
  return true;
}

template <class T>
void linkList<T>::printLinkList() {
  cout << "\nStart print LinkList! "
          "-------------------------------------------------- "
       << endl;
  cout << "Length of Linklist  = " << length() << endl;
  Link<T> *tmp = head;
  int index = 0;
  while (tmp->next) {
    cout << "Node " << index++ << " = " << tmp->data << endl;
    tmp = tmp->next;
  }
  cout << "Node " << index << " = " << tmp->data << endl;
  cout << "\nEnd print LinkList! "
          "**************************************************** "
       << endl;
}

template <class T>
void linkList<T>::up(int num) {
  cout << "set all node's data to it's index" << endl;
  clear();
  head = new Link<T>(0);
  Link<T> *tmp = head;
  int index = 1;
  while (index < num) {
    tmp->next = new Link<T>(index++);
    tmp = tmp->next;
  }
  tail = tmp;
}
#endif