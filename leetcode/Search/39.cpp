#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> cur;         //当前选定的值
    vector<vector<int>> ans; /*满足条件的结果*/
    sort(candidates.begin(), candidates.end());
    dfs(candidates, ans, cur, target, 0);
    return ans;
  }

 private:
  void dfs(const vector<int>& candidates, vector<vector<int>>& ans,
           vector<int>& cur, int target, int index) {
    if (target == 0) {
      ans.push_back(cur);
      return;
    }

    for (int i = index; i < candidates.size();
         i++) { /*i=index 因为前面已经排好序了，为了不重复*/
      if (candidates[i] > target) break;
      cur.push_back(candidates[i]);
      dfs(candidates, ans, cur, target - candidates[i],
          i); /*这里index=i是因为待选数组中的元素可以任意重复选择*/
      cur.pop_back();
    }
  }
};

class Solution1 {
 public:
  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> cur;         //当前选定的值
    vector<vector<int>> ans; /*满足条件的结果*/
    sort(candidates.begin(), candidates.end());
    for (int n = 1; n <= target / candidates[0]; n++) {
      dfs(candidates, ans, cur, target, 0, 0, n);
    }

    return ans;
  }

 private:
  void dfs(const vector<int>& candidates, vector<vector<int>>& ans,
           vector<int>& cur, int target, int start, int depth, int n) {
    if (depth == n) {
      if (target == 0) ans.push_back(cur);
      return;
    }
    /*i=index 因为前面已经排好序了，为了不重复*/
    for (int i = start; i < candidates.size(); i++) {
      if (candidates[i] > target) break;
      cur.push_back(candidates[i]);
      dfs(candidates, ans, cur, target - candidates[i], i,depth+1,n);
      /*这里index=i是因为待选数组中的元素可以任意重复选择*/
      /*只能写depth+1,不能写depth++*/
      cur.pop_back();
    }
  }
};

int main(int argc, char const* argv[]) {
  vector<int> candidates = {1, 2, 3, 4};
  Solution1 s;
  vector<vector<int>> ans = s.combinationSum(candidates, 8);
  for (auto&& i : ans) {
    for (auto&& j : i) {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
