#ifndef ARR_STACK_H_
#define ARR_STACK_H_
#include "myStack.h"
template <class T>
class arrStack : public Stack<T> {
 private:
  int maxSize;
  int top;
  T* arr;

 public:
  arrStack(const int num);
  ~arrStack();
  void clear();
  bool push(const T item);
  bool pop(T& item);
  bool topVal(T& item);
  bool isEmpty();
  bool isFull();
  void printArrStack();
};

template <class T>
arrStack<T>::arrStack(const int num) {
  arr = new T[num];
  maxSize = num ;
  top = -1;
}

template <class T>
arrStack<T>::~arrStack() {
  clear();
}

template <class T>
void arrStack<T>::clear() {
  delete[] arr;
}

template <class T>
bool arrStack<T>::push(const T item) {
  if (isFull()) {
    cout << "Stack overflow !" << endl;
    return false;
  }
  arr[++top] = item;
  return true;
}

template <class T>
bool arrStack<T>::pop(T& item) {
  if (isEmpty()) {
    cout << "Stack empty !" << endl;
    return false;
  }
  item = arr[top--];
  return true;
}

template <class T>
bool arrStack<T>::topVal(T& item) {
  if (isEmpty()) {
    cout << "Stack empty !" << endl;
    return false;
  }
  item = arr[top];
  return true;
}

template <class T>
bool arrStack<T>::isEmpty() {
  return (top == -1);
}

template <class T>
bool arrStack<T>::isFull() {
  return (top == maxSize - 1);
}

template <class T>
void arrStack<T>::printArrStack() {
  if (isEmpty()) {
    cout << "Stack empty , cant print !" << endl;
    return;
  }
  cout << "Start print arrStack-------------------------------" << endl;
  for (size_t i = 0; i <= top; i++) {
    cout << "Stack[" << i << "] = " << arr[i] << endl;
  }
  cout << "End print arrStack*********************************" << endl;
}

#endif