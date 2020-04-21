#ifndef LINK_STACK_H
#define LINK_STACK_H

#include "link.h"
#include "myStack.h"

template <class T>
class linkStack : public Stack<T> {
 private:
  Link<T>* top;  //栈顶指针
  int size;      //元素个数

 public:
  linkStack();
  ~linkStack();
  void clear();
  bool push(const T item);
  bool pop(T& item);
  bool topVal(T& item);
  void printLinkStack();
};

template <class T>
linkStack<T>::linkStack() {
  size = 0;
  top = nullptr;
}

template <class T>
linkStack<T>::~linkStack() {
  clear();
}

template <class T>
void linkStack<T>::clear() {
  cout << "Clear linkStack " << endl;
  Link<T>* tmp = top;
  Link<T>* del;
  Link<T>* next;
  while (tmp->next) {
    del = tmp;
    tmp = tmp->next;
    delete del;
  }
  delete tmp;
  size = 0;
}

template <class T>
bool linkStack<T>::push(const T item) {
  // Link<T> *tmp  =  new Link<T>(item, top);
  // top = tmp;
  top = new Link<T>(item, top);
  size++;
  return true;
}

template <class T>
bool linkStack<T>::pop(T& item) {
  if (size == 0) {
    cout << "Stack empty ,pop fail" << endl;
    return false;
  }
  item = top->data;
  Link<T>* tmp = top->next;
  delete top;
  top = tmp;
  size--;
  return true;
}

template <class T>
bool linkStack<T>::topVal(T& item) {
  if (size <= 0) {
    cout << "Stack empty ,get top val fail !" << endl;
    return false;
  }
  item = top->data;
  return true;
}

template <class T>
void linkStack<T>::printLinkStack() {
  if (size <= 0) {
    cout << "Stack empty, print fail !" << endl;
  }
  Link<T>* tmp = top;
  int i = 0;
  cout << "Start print linkStack------------------------------------" << endl;
  while (tmp->next) {
    cout << "Link stack [" << size - i << "] = " << tmp->data << endl;
    i++;
    tmp = tmp->next;
  }
  cout << "Link stack [" <<  size - i << "] = " << tmp->data << endl;
  cout << "Stop print linkStack*************************************" << endl;
}

#endif