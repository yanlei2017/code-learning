#if !defined(SORT_HELPER_H)
#define SORT_HELPER_H
#include<bits/stdc++.h>
/*排序用到的一些辅助函数*/
/*产生0~range的随机数组*/
void genereteArray(int arr[], int size,int range) {
  for (size_t i = 0; i < size; i++) {
    arr[i] = rand()%range;
  }
}
/*检测排序是否正确*/
template <class T>
void printSort(T arr[], int ARR_SIZE) {
  bool isSorted = false;
  for (size_t i = 0; i < ARR_SIZE - 1; i++) {
    if (arr[i] <= arr[i + 1]) {
      isSorted = true;
    } else {
      isSorted = false;
      break;
    }
  }
  if (isSorted) {
    std::cout << "Sorted right!" << std::endl;
  } else {
    std::cout << "Sorted Wrong!" << std::endl;
  }
  for (size_t i = 0; i < ARR_SIZE; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

#endif  // SORT_HELPER_H
