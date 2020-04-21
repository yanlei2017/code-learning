#ifndef MY_STACK_H
#define MY_STACK_H
#include<iostream>
using namespace std;
template <class T>
class Stack {
 public:
  void clear();
  bool push(const T item);
  bool pop(T& item);
  bool topVal(T& item);
  bool isEmpty();
  bool isFull();
};

#endif