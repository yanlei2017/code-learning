#include <bits/stdc++.h>
using namespace std;
/*DFS*/
class Solution {
 public:
  vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
      return {}; /*返回一个空的函数定义的*/
    }

    vector<vector<char>> d(10);
    d[0] = {};
    d[1] = {};
    d[2] = {'a', 'b', 'c'};
    d[3] = {'d', 'e', 'f'};
    d[4] = {'g', 'h', 'i'};
    d[5] = {'j', 'k', 'l'};
    d[6] = {'m', 'n', 'o'};
    d[7] = {'p', 'q', 'r', 's'};
    d[8] = {'t', 'u', 'v'};
    d[9] = {'w', 'x', 'y', 'z'};
    vector<string> ans;
    string tmp;
    dfs(digits, d, 0, tmp, ans);
    return ans;
  }

 private:
  void dfs(const string &digits, const vector<vector<char>> d, int column,
           string &tmp, vector<string> &ans) {
    if (column == digits.length()) {
      ans.push_back(tmp);
      return;
    } /*结束条件*/
    for (const char c : d[digits[column] - '0']) {
      tmp.push_back(c);
      dfs(digits, d, column + 1, tmp, ans);
      tmp.pop_back();
    }
  };
};

class Solution2 {
 public:
  vector<string> letterCombinations(string digits) {
    vector<vector<char>> d(10);
    d[0] = {};
    d[1] = {};
    d[2] = {'a', 'b', 'c'};
    d[3] = {'d', 'e', 'f'};
    d[4] = {'g', 'h', 'i'};
    d[5] = {'j', 'k', 'l'};
    d[6] = {'m', 'n', 'o'};
    d[7] = {'p', 'q', 'r', 's'};
    d[8] = {'t', 'u', 'v'};
    d[9] = {'w', 'x', 'y', 'z'};
    vector<string> ans = {""}; /*i层的解*/
    vector<string> ans1;       /*i层的解*/
  for (auto &&i : ans)
  {
    
  }
  
    for (char digit : digits) {
      vector<string> tmp; /*i+1层的解*/
      for (const string &s : ans) {
        for (char c : d[digit - '0'])
          tmp.push_back(s + c); /*s是i层的解，c是i+1层的解，s不变，c在变化*/
      }
      // ans.swap(tmp);
      ans = tmp;
    }
    return ans;
  }
};

int main(int argc, char const *argv[]) {
  Solution2 ss;

  vector<string> ans = ss.letterCombinations(string("234"));
  for (string s : ans) {
    static int i = 0;
    cout << i++ << ": " << s << endl;
  }
  return 0;
}