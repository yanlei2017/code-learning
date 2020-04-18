#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  int m;
  std::cin >> n >> m;
  int result;
  int a, b, c;
  for (int i = 1; i <= n; i++) {
    a = a * i;
    /* code */
  }
  for (int i = 1; i < m; i++) {
    b = b * i;
    /* code */
  }
  for (int i = 0; i <= n - m; i++) {
    c = c * i;
    /* code */
  }


  std::cout << (a/(b*c))%1000000007 << std::endl;
  return 0;
}
