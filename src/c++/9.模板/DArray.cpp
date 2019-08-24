#include "DArray.hpp"

template <class T>
DArray<T>::DArray(int sz) {
  assert(sz > 0);
  size = sz;
  list = new T[size];
}

template <class T>
DArray<T>::~DArray() {
  delete[] list;
}

template <class T>
DArray<T>::DArray(const DArray<T> &d) {
  size = d.size;
  list = new T[size];
  for (int i = 0; i < d.size; i++) {
    list[i] = d.list[i];
  }
}

template <class T>
DArray<T> &DArray<T>::operator=(const DArray<T> &d) {
  if (this != &d) {        //判断是否为同一个对象
    if (size != d.size) {  //判断大小
      delete[] list;
      size = d.size;
      list = new T[size];
    }
    for (int i = 0; i < d.size; i++) {
      list[i] = d.list[i];
    }
  }
  return *this;
}

template <class T>
T &DArray<T>::operator[](int i) {
  assert(i > 0 && i < size);
  return list[i];
}

template <class T>
const T &DArray<T>::operator[](int i) const {
  assert(i > 0 && i < size);
  return list[i];
}
template <class T>
DArray<T>::operator T *() {
  return list;
}
template <class T>
int DArray<T>::getsize()const  {
  return size;
}

template <class T>
void DArray<T>::resize(int sz) {
  assert(sz > 0);
  if (sz == size) {
    return;
  }

  T *newlist = new T[sz];
  int n = (sz < size) ? sz : size;
  for (int i = 0; i < n; i++) {
    newlist[i] = list[i];
  }
  delete[] list;
  list = newlist;
  size = sz;
}
