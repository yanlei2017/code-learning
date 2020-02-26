//负数逆序，在C++中和正数一样的
#include <iostream>
#include <vector>

int main() {
  int a =-650;
  int res = 0;
  while (a) {
    res = res * 10 + a % 10;
    a = a / 10;
  }
  std::cout << res;
  return 0;
}