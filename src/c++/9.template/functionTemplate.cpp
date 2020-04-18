#include <array>
#include <iostream>
#include <vector>
using namespace std;

template <typename T> T abs(T x) { return x < 0 ? -x : x; }

template <class T> void outputArray(const T *array, const int count) {
  for (int i = 0; i < count; i++) {
    cout << array[i] << " "; //如果数组元素是对象,需要对该对象重载流插入运算符<<
  }
  cout << "\n";
}

int main(int argc, char const *argv[]) {
  int a = -5;
  double aa = -8.0;
  cout << "abs of a = " << abs(a) << endl;
  cout << "abs of a = " << abs(aa) << endl;

  const int a_count = 8, b_count = 8, c_count = 50;
  int aaa[a_count] = {1, 2, 3, 4, 5, 6, 7, 8};
  double bbb[b_count] = {1.1, 2.8, 3.2, 4.8, 5.9, 6.3, 7.1, 8.9};
  char ccc[c_count] = "Welcome !";
  cout << "aaa array contains " << endl;
  outputArray(aaa, a_count);
  cout << "bbb array contains " << endl;
  outputArray(bbb, b_count);
  cout << "ccc array contains " << endl;
  outputArray(ccc, c_count);
  return 0;
}
