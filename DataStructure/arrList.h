/*顺序表，向量*/
#ifndef ARRLIST_H_
#define ARRLIST_H_
#include "List.h"
template <class T>
class arrList : public List<T> {
 private:
  T* aList;
  int maxSize;
  int curLen;
  int position;  // 私有变量，当前处理位置

 public:
  arrList(const int size);
  ~arrList();
  void printArr();
  void clear();
  int length();                               // 返回当前实际长度
  bool append(const T value);                 // 在表尾添加元素 v
  bool insert(const int p, const T value);    // 插入元素
  bool deleteAt(const int p);                 // 删除位置 p 上元素
  bool setValue(const int p, const T value);  // 设元素值
  bool getValue(const int p, T& value);       // 返回元素
  bool getPos(int& p, const T value);         // 查找元素
};

template <class T>
void arrList<T>::printArr() {
  cout << "\nStart print arrList :---------------------------\n" << endl;
  for (int i = 0; i < curLen; i++) {
    cout << "Pos " << i << " = " << aList[i] << endl;
  }
  cout << "\nEnd print arrList :-----------------------------\n" << endl;
}
template <class T>
arrList<T>::arrList(const int size) {
  maxSize = size;
  aList = new T[maxSize];
  curLen = position = 0;
}

template <class T>
arrList<T>::~arrList() {
  delete[] aList;
}

template <class T>
void arrList<T>::clear() {
  delete[] aList;
  curLen = position = 0;
  aList = new T[maxSize];
}

template <class T>
int arrList<T>::length() {
  return curLen;
}

template <class T>
bool arrList<T>::append(const T value) {
  if (curLen < maxSize) {
    aList[curLen++] = value;
    return true;
  } else {
    cout << "The list is overflow" << endl;
    return false;
  }
}

template <class T>
bool arrList<T>::insert(const int p, const T value) {
  if (curLen >= maxSize) {
    cout << "The list is overflow" << endl;
    return false;
  }
  if (p < 0 || p > curLen) {
    cout << "Insertion point is illegal" << endl;
    return false;
  }
  for (int i = curLen; i > p; i--) aList[i] = aList[i - 1];
  aList[p] = value;
  curLen++;
  return true;
}

template <class T>
bool arrList<T>::deleteAt(const int p) {
  if (curLen <= 0) {
    cout << "No element to delete" << endl;
    return false;
  }

  if (p < 0 || p > curLen) {
    cout << "Error delete position" << endl;
    return false;
  }
  for (int i = p; i < curLen - 1; i++) aList[i] = aList[i + 1];
  curLen--;
  return true;
}

template <class T>
bool arrList<T>::setValue(const int p, const T value) {
  if (p < 0 || p > curLen) {
    cout << "Error SET position" << endl;
    return false;
  }
  aList[p] = value;
  return true;
}

template <class T>
bool arrList<T>::getValue(const int p, T& value) {
  if (p < 0 || p > curLen) {
    cout << "Error query position" << endl;
    return false;
  }
  value = aList[p];
  return true;
}

template <class T>
bool arrList<T>::getPos(int& p, const T value) {
  for (int i = 0; i < curLen; i++) {
    if (aList[i] == value) {
      p = i;
      return true;
    }
  }
  return false;
}
#endif