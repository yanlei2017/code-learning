#include<bits/stdc++.h>
#include "sortHelper.hpp"
using namespace std;

/*
6 5 4 8 9 1 3 7
6 5 4 3 9 1 8 7
6 5 4 3 1 9 8 7
1 5 4 3 6 9 8
*/
/*
1.指定一个中轴
2.从右往左找,右边赋值到左边
3.从左往右找，左边赋值到右边
*/
int get_index(int arr[], int left, int right) {
  int i = left;
  int j = right;
  int mid = arr[i];
  while (i < j) {
    while (arr[j] > mid && i < j) j--;
    while (arr[i] < mid && i < j) i++;
    swap(arr[i], arr[j]);
  }
  arr[left] = arr[i];
  arr[i] = mid;
  return i;
}
/*
1.找中轴
2.左边快排
3.右边快排
*/
void quickSort(int arr[], int left, int right) {
  if (left < right) {
    int index = get_index(arr, left, right);
    quickSort(arr, left, index - 1);
    quickSort(arr, index + 1, right);
  }
}

void quickSort1(int arr[], int left, int right) {
  if (left < right) {
    int i = left;
    int j = right;
    int mid = arr[left];
    while (i < j) {
      while (arr[j] >= mid && i < j) j--;
      while (arr[i] <= mid && i < j) i++;
      swap(arr[i], arr[j]);  //左边比基准数大的 和 右边比基准数小的 交换
    }
    swap(arr[left], arr[i]);  //基准值和左右游标相等的地方交换
    quickSort1(arr, left, i - 1);
    quickSort1(arr, i + 1, right);
  } else {
    return;
  }
}
int main(int argc, char const *argv[]) {
  int ARR_SIZE;
  cout << "Input array size " << endl;
  cin >> ARR_SIZE;
  int arr[ARR_SIZE];
  genereteArray(arr, ARR_SIZE, 100);
  quickSort1(arr, 0, ARR_SIZE - 1);
  printSort(arr, ARR_SIZE);
  return 0;
}
