#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    vector<int> d;
    for (auto &&i : candidates)
      if (i < target) d.push_back(i);
    vector<vector<int>> ans;

    dfs(target, d, 0, ans, );

    return ans;
  }

 private:
  void dfs(int target, const vector<int> &d, int index,
           vector<vector<int>> &ans) {
    for (auto &&i : d) {
      if (d[index] < target) {
        dfs(target, d, index + 1, ans);
      }
    }
  }
};

int main(int argc, char const *argv[]) { return 0; }
