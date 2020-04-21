#ifndef LINK_H_
#define LINK_H_

template <class T>
class Link {
 public:
  T data;         // 用于保存结点元素的内容
  Link<T> *next;  // 指向后继结点的指针
  Link(const T info, Link<T> *nextValue = nullptr) {
    data = info;
    next = nextValue;
  }
  Link(Link<T> *nextValue) { next = nextValue; }
};

#endif