#include <bits/stdc++.h>
using namespace std;

unsigned long long fac(int x) { /*jiecheng*/
    unsigned long long  f = 1;
  for (size_t i = 1; i <= x; i++) {
    f *= i;
  }
  return f;
}

int main(int argc, char const *argv[])
{
    int x;
    cin>>x;
    cout<<fac(x)<<endl;
    cout<<LONG_LONG_MAX<<endl;
    return 0;
}
