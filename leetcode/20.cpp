
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> res;
    bool istrue = true;
    for (char c : s) {
      if (c == '(' || c == '[' || c == '{') {
        res.push(c);
        continue;
      }
      if (!res.empty() && (abs(res.top() - c) < 5)) {
        res.pop();
      } else {
        istrue = false;
        break;
      }
    }
    if (!res.empty()) istrue = false;
    return istrue;
  }
};

int main(int argc, char const *argv[]) {
  string s = "[]{}(){[()]}";
  Solution ss;
  bool x = ss.isValid(s);
  if (x) {
    cout << "is true" << endl;
  } else {
    cout << "is false" << endl;
  }

  return 0;
}
