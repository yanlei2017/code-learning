#include <iostream>
#include <iterator>
using namespace std;
/*
123
1..
2..
3..
*/
void perm(int a[], int p, int q) {
  if (p == q) {
    copy(a, a + q + 1, ostream_iterator<int>(cout, " "));
    cout << endl;
  }

  for (int i = p; i <= q; i++) {
    swap(a[p], a[i]);   //交换头
    perm(a, p + 1, q);  //头后面的做全排列
    swap(a[p], a[i]);   //还原数组
  }
}

int main(int argc, char const *argv[]) {
  int n, m;
  cin >> n >> m;
  int a[n];
  int a[m];
  int aa[n];
  for (int i = 1; i <= n; i++)
  {
      a[i]=i;
  }
  perm(a, 0, 4);
}
