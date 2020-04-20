#ifndef MY_STACK_H
#define MY_STACK_H

template <class T>
class Stack {
 public:
  void clear();
  bool push(const T item);
  bool pop(T& item);
  bool top(T& item);
  bool isEmpty();
  bool isFull();
};

#endif