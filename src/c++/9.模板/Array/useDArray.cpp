//求2-N中的质数,输入为N 输出为2~N内的质数
#include <iostream>
#include "DArray.hpp"
using namespace std;
int main(int argc, char const *argv[]) {
  DArray<int> a(10);//用来存放质数
  int N = 0;
  cout << "Please input a number > = 2" << endl;
  cin >> N;
  int count = 0;  //质数个数

  for (int i = 2; i <= N; i++) {
    bool isPrime = true;
    for (int j = 0; j < count; j++) {
      if (i % a[j] == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      if (count == a.getsize()) {
        a.resize(2 * count);
      }
      a[count++] = i;
    }
  }

  for (int i = 0; i < count; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
