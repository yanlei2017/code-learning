/*1. 两数之和*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[j] == target - nums[i]) {
          return vector<int>{i, j};
        }
      }
    }
  }
};