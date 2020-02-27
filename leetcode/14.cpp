/*最长公共前缀*/

#include <bits/stdc++.h>
using namespace std;
struct A {
  string str = "";
  bool same = false;
};
/*
flower
flow
flight
*/
class Solution {
 public:
  /*比较字符串的前N个字符是否相等*/
  void compareString(const vector<string> str, const int len, A* args) {
    string tmp = str[0].substr(0, len);
    for (size_t i = 0; i < str.size() - 1; i++) {
      if (tmp == str[i + 1].substr(0, len)) {
        args->same = true;
        args->str = tmp;
      } else {
        args->same = false;
        args->str = "";
        break;
      }
    }
  }

  string longestCommonPrefix1(vector<string>& strs) {
    if (strs.size() == 0) return "";                          /*空*/
    if (strs.size() == 1 && !strs[0].empty()) return strs[0]; /*一个字符串*/
    for (size_t i = 0; i < strs.size(); i++) { /*n个空字符串*/
      if (strs[i] == "") {
        return "";
      }
    }

    int MIN_LENGTH = strs[0].size();
    for (size_t i = 0; i < strs.size(); i++)
      MIN_LENGTH = MIN_LENGTH < strs[i].size() ? MIN_LENGTH : strs[i].size();

    A res[MIN_LENGTH];

    for (size_t i = 1; i <= MIN_LENGTH; i++) { /*从第一个字符串开始比较*/
      compareString(strs, i, &res[i - 1]);
    }

    string ans = "";
    for (size_t i = 0; i < MIN_LENGTH; i++) {
      if (res[i].same) {
        ans = res[i].str;
        continue;
      } else {
        return ans;
      }
    }
    return ans;
  }
  /*解法2 双指针*/
  string longestCommonPrefix2(vector<string>& strs) {
    //双指针法：指针i指向每串字符的同一个位置的字符，指针j用来遍历每个字符串
    if (strs.size() == 0)
      return string();
    else if (strs.size() == 1)
      return strs[0];
    string result = "";
    //取第一个字符串为最长公共前缀，然后遍历每个字符串，来确定实际的最长公共前缀
    for (int i = 0; i < strs[0].size();
         ++i)  // i表示指向每个字符串的同一个位置的字符
    {
      for (int j = 1; j < strs.size(); ++j)  // j遍历到每个字符串
        if (strs[0][i] != strs[j][i]) return result;
      result += strs[0][i];
    }
    return result;
  }
};
int main(int argc, char const* argv[]) {
  vector<string> tmp;
  tmp.push_back(string("C"));
  tmp.push_back(string("ACC"));
  tmp.push_back(string("CCC"));

  Solution a;
  string res = a.longestCommonPrefix1(tmp);

  return 0;
}
