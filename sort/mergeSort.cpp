//归并排序
// arr = [ 2 8 9 10 4 5 6 7 ]
//         L      M       R

#include <bits/stdc++.h>
#include "sortHelper.hpp"
using namespace std;
/*
 0 1 2 3  4 5 6 7
 2 8 9 10 4 5 6 7
 L=0      M=4   R=7
*/
void merge(int *arr, int L, int M, int R) {
  int LEFT_SIZE = M - L;
  int RIGHT_SIZE = R - M + 1;
  int left[LEFT_SIZE];
  int right[RIGHT_SIZE];
  int i, j, k;
  // 1. fill int left sub array ,2 8 9 10
  for (i = L; i < M; i++) {
    left[i - L] = arr[i];
  }
  // 2. fill in right sub array 4 5 6 7
  for (i = M; i <= R; i++) {
    right[i - M] = arr[i];
  }
  // 3. merge
  i = 0, j = 0, k = L;
  //第一阶段，取2个数组最小值作比较，较小的放入大数组
  while (i < LEFT_SIZE && j < RIGHT_SIZE) {
    if (left[i] < right[j]) {
      arr[k] = left[i];
      i++;
      k++;
    } else {
      arr[k] = right[j];
      j++;
      k++;
    }
  }
  //第二阶段，此时j=RIFHT_SIZE 右边的数组已经取完，直接把左边边排好序的放入大数组中即可
  while (i < LEFT_SIZE) {
    arr[k] = left[i];
    i++;
    k++;
  }
  //第二阶段，此时i=LEFT_SIZE 左边边的数组已经取完，直接把右边排好序的放入大数组中即可
  while (j < RIGHT_SIZE) {
    arr[k] = right[j];
    j++;
    k++;
  }
}

void mergeSort(int *arr, int L, int R) {
  /*注意这里M的计算，这里M计算值是左边数组的最后一个，而merge函数中用的是右边数组的第一个*/
  int M = (L + R) / 2;
  //结束条件
  if (L == R) {
    return;
  } else {
    mergeSort(arr, L, M);
    mergeSort(arr, M + 1, R);
    merge(arr, L, M + 1, R);
  }
}

int main(int argc, char const *argv[]) {
  int ARR_SIZE;
  cout << "Input array size " << endl;
  cin >> ARR_SIZE;
  int arr[ARR_SIZE];
  genereteArray(arr, ARR_SIZE, 100);
  int L = 0;
  int R = ARR_SIZE - 1;
  mergeSort(arr, L, R);
  printSort(arr,ARR_SIZE);
  return 0;
}
