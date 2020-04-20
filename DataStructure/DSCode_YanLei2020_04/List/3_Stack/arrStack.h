#ifndef ARR_STACK_H_
#define ARR_STACK_H_
#include "myStack.h"
template <class T>
class arrStack : public Stack<T> {
 private:
 public:
  void clear();
  bool push(const T item);
  bool pop(T& item);
  bool top(T& item);
  bool isEmpty();
  bool isFull();
};

#endif