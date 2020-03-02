// 删除排序数组中的重复项

//快慢指针方法
/*
数组完成排序后，我们可以放置两个指针 ii 和 jj，其中 ii 是慢指针，而 jj
是快指针。只要 nums[i] = nums[j]nums[i]=nums[j]，我们就增加 jj 以跳过重复项。

当我们遇到 nums[j] ！= nums[i]
时，跳过重复项的运行已经结束，因此我们必须把它（nums[j]）的值复制到
nums[i+1]。然后递增 i，接着我们将再次重复相同的过程，直到 jj
到达数组的末尾为止。

作者：LeetCode
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/solution/shan-chu-pai-xu-shu-zu-zhong-de-zhong-fu-xiang-by-/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int fast = 0;
    int slow = 0;
    while (fast < nums.size()) {
      if (nums[fast] != nums[slow]) {
        /*这个判断是为了避免 [1 2 3] 这种情况，会有原地复制现象*/
        if (fast - slow > 1) {
          nums[slow + 1] = nums[fast];
        }
        slow++;
      }
      fast++;
    }
    return slow + 1; /*慢指针之前都是排好序的*/
  }
};

int main(int argc, char const* argv[]) {
  vector<int> input;
  for (size_t i = 0; i < 50; i++) {
    input.push_back(i);
    input.push_back(i);
    input.push_back(i);
  }
  cout << "Input[" << input.size() << "] = ";
  for (auto&& i : input) {
    cout << i << " ";
  }
  cout << endl;

  Solution s;
  int len = s.removeDuplicates(input);
  cout << "Now , Input [" << len << "] = ";
  for (size_t i = 0; i < len; i++) {
    cout << input.at(i) << " ";
  }
  cout << endl;
  return 0;
}
