#include <bits/stdc++.h>
using namespace std;

int kkk;

vector<vector<int>> threeSum(vector<int>& nums) {
  sort(nums.begin(), nums.end());
  if (nums.size() < 3 || nums.empty() || nums.front() > kkk) return {};
  vector<vector<int>> res;
  for (int i = 0; i < nums.size(); i++) {
    int fix = nums[i];
    if (fix > kkk) break;
    if (i > 0 && fix == nums[i - 1]) continue; /**/
    int l = i + 1;
    int r = nums.size() - 1;
    while (l < r) {
      if ((nums[l] + nums[r] + fix) < kkk) {
        if (l == i + 1 || r == nums.size() - 1) {
          res.push_back(vector<int>{nums[i], nums[l], nums[r]});
          l++;
          r--;
        } else if (nums[l] == nums[l - 1])
          l++;
        else if (nums[r] == nums[r + 1])
          r--;
        else {
          res.push_back(vector<int>{nums[i], nums[l], nums[r]});
          l++;
          r--;
        }
      } else if ((nums[l] + nums[r] + fix) < kkk)
        l++;
      else
        r--;
    }
  }
  return res;
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
