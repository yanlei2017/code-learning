#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  float s = 3.14159265469645645646;
  cout << setprecision(5) << s << endl;
  cout << setiosflags(ios::fixed) << setprecision(5) << s << endl;
  string a;
  cin.width(5);
  cin >> a;
  cout << a << endl;

  char aa[10];
  cin.width(3);
  cin >> aa;
for (auto &&i : aa)
{
  cout<<i<<endl;
}

  return 0;
}
