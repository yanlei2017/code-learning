//冒泡排序
/*
7 6 5 4 3 2 1 8
6 5 4 3 2 1 7 8
5 4 3 2 1 6 7 8
4 3 2 1 5 6 7 8
3 2 1 4 5 6 7 8
2 1 3 4 5 6 7 8
1 2 3 4 5 6 7 8
*/

#include <iostream>
#include "printArray.hpp"
using namespace std;

// 1.原始的冒泡排序
template <class T>
void BubbleSort1(T *arr, int length) {
  int sortCount = 0;
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
// 1.带isSorted标志冒泡排序
template <class T>
void BubbleSort2(T *arr, int length) {
  for (int i = 0; i < length - 1; i++) {
    bool isSorted = true;
    for (int j = 0; j < length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSorted = false;
      }
    }
    if (isSorted) break;
  }
}
// 3.带isSorted标志和有序区间判定的冒泡排序
template <class T>
void BubbleSort3(T *arr, int length) {
  int lastExchangeIndex = 0;  //记录上次交换发生的位置
  int unsortedBorder = length - 1;  //无序数列的边界，每次只需要比较到这里就可以
  for (int i = 0; i < length; i++) {
    bool isSorted = true;
    for (int j = 0; j < unsortedBorder; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSorted = false;
        lastExchangeIndex = j;
      }
    }
    unsortedBorder = lastExchangeIndex;
    if (isSorted) break;
  }
}

int main(int argc, char const *argv[]) {
  int ARR_LENGTH = 8;
  int arr1[ARR_LENGTH] = {8, 7, 6, 5, 4, 3, 2, 1};
  int arr2[ARR_LENGTH] = {8, 7, 6, 5, 4, 3, 2, 1};
  int arr3[ARR_LENGTH] = {8, 7, 6, 5, 4, 3, 2, 1};

  BubbleSort1(arr1, ARR_LENGTH);
  printarray(arr1, ARR_LENGTH);
  
  BubbleSort2(arr2, ARR_LENGTH);
  printarray(arr2, ARR_LENGTH);

  BubbleSort3(arr3, ARR_LENGTH);
  printarray(arr3, ARR_LENGTH);

  return 0;
}
