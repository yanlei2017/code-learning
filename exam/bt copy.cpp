#include <bits/stdc++.h>
using namespace std;

int kkk;

vector<vector<int>> threeSum(vector<int>& nums) {
  vector<vector<int>> ans;
  int n = nums.size();
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n; ++i) {
    if (i > 0 && nums[i] == nums[i - 1]) {
      continue;
    }

    int l = i + 1;
    int r = n - 1;

    while (l < r) {
      int sum = nums[i] + nums[l] + nums[r];
      if (sum < kkk) {
        vector<int> t;
        t.push_back(nums[i]);
        t.push_back(nums[l]);
        t.push_back(nums[r]);
        ans.push_back(t);
        while (l < r && nums[l] == nums[l + 1]) l++;
        while (l < r && nums[r] == nums[r - 1]) r--;
        l++;
        r--;
      } else if (sum < kkk) {
        l++;
      } else {
        r--;
      }
    }
  }
  return ans;
}

int main(int argc, char const* argv[]) {
  int n;
  cin >> n;
  vector<int> arr;
  for (size_t i = 0; i < n; i++) {
    int t = 0;
    cin >> t;
    arr.push_back(t);
  }
  cin >> kkk;

  vector<vector<int>> res = threeSum(arr);
  cout << res.size() << endl;
  return 0;
}
