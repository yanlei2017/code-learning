#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull fac(int x)
{ /*returen x!*/
  ull f = 1;
  for (size_t i = 1; i <= x; i++)
  {
    f *= i;
  }
  return f;
}

int main()
{
  int m, last;

  cin >> m >> last;
  if (m == 0)
  {
    return 0;
  }
  if (m == 1)
  {
    cout << last;
  }

  ull a[m] = {0};
  a[m - 1] = last;
  int sb[m - 1] = {0};
  for (size_t i = 0; i < m - 1; i++)
  {
    sb[i] = fac(i + 1) + 1;
  }
  for (int i = m - 2; i >= 0; i--)
  {
    a[i] = a[i + 1] + sb[i];
  }
  ull sum = 0;
  for (int i = m - 1; i >= 0; i--)
  {
    sum += a[i];
  }
  cout << sum << endl;
}