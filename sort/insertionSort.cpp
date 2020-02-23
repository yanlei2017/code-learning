//插入排序，原理跟打扑克牌一样，每次摸起来的放到前面合适的位置
/*
7 9 8 6 4 5 3 1 2
7 8 9 6 4 5 3 1 2
6 7 8 9 4 5 3 1 2
4 6 7 8 9 5 3 1 2
4 5 6 7 8 9 3 1 2
3 4 5 6 7 8 9 1 2
1 3 4 5 6 7 8 9 2
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
*/
// 1.把第n个数插到前面合适的位置

#include <iostream>
#include "printArray.hpp"
using namespace std;

void insert(int arr[], int n) {
  int key = arr[n];  //记录当前待插入的数字
  int i = n;
  //如果前面的数字大于当前数字，循环直到前面的数字比当前数字小
  while (arr[i - 1] > key) {
    arr[i] = arr[i - 1];  //当前数字等于前面的数字
    i--;
    if (i == 0) {
      break;
    }
  }
  arr[i] = key;  //插入当前数字
}

// 2. 从数组的第二个数字开始，往前插入,因为一个数字肯定是有序的，第一个不用排序
void insertionSort(int arr[], int n) {
  for (size_t i = 1; i < n; i++) {
    insert(arr, i);
    for (size_t i = 0; i < 9; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}

int main(int argc, char const *argv[]) {
  int arr[9] = {9, 7, 8, 6, 4, 5, 3, 1, 2};
  insertionSort(arr, 9);
  printarray(arr, 9);
  return 0;
}
