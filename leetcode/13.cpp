/*罗马数字转int*/

#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> m = {
    {"I", 1},   {"IV", 3},   {"V", 5},   {"IX", 8},  {"X", 10},
    {"XL", 30}, {"L", 50},   {"XC", 80}, {"C", 100}, {"CD", 300},
    {"D", 500}, {"CM", 800}, {"M", 1000}};
/*s.substr(a,b) a是起始地址，b是长度*/
class Solution {
 public:
  int romanToInt(string s) {
    int tmp = m[s.substr(0, 1)]; /*第一个字母是什么*/
    for (size_t i = 1; i < s.size(); i++) {
      string two = s.substr(i - 1, 2); /*三种 2个字母的特殊情况*/
      string one = s.substr(i, 1);     /*单个字母*/
      tmp += m[two] ? m[two] : m[one];/*如果two字符串在hash表中存在的话，说明连续的2字符串有效，否则只加后面的字符串*/
    }
    return tmp;
  }
};

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;
  Solution a;
  cout << a.romanToInt(s) << endl;
  getchar();
  return 0;
}
