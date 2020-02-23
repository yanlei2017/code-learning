//选择排序，思想:找出最大的值，然后最大值与最后一个数字交换
/*
9, 7, 8, 6, 4, 5, 3, 1, 2

2 7 8 6 4 5 3 1 9
2 7 1 6 4 5 3 8 9
2 3 1 6 4 5 7 8 9
2 3 1 5 4 6 7 8 9
2 3 1 4 5 6 7 8 9
2 3 1 4 5 6 7 8 9
2 1 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9
*/
#include <iostream>
#include "printArray.hpp"
using namespace std;
// 1.找出最大值的位置
int findMaxPos(int arr[], int n) {
  int pos = 0;
  int max = arr[0];
  for (size_t i = 1; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
      pos = i;
    }
  }
  return pos;
}
// 2.将最大值与最后一个数字交换
void selectionSort(int arr[], int n) {
  while (n > 1) {
    int pos = findMaxPos(arr, n);
    int temp = arr[pos];
    arr[pos] = arr[n - 1];
    arr[n - 1] = temp;
    n--;
    printarray(arr, 9);
  }
}

int main(int argc, char const *argv[]) {
  cout << "选择排序" << endl;
  int arr[9] = {9, 7, 8, 6, 4, 5, 3, 1, 2};
  selectionSort(arr, 9);
  printarray(arr, 9);

  return 0;
}
