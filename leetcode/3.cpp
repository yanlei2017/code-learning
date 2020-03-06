//leetcode 3 无重复字符的最长子串
#include <bits/stdc++.h>
using namespace std;
/*暴力法 不可取*/
class Solution {
 public:
  /*判断字符串中是否有重复字符*/
  bool subStr_repeat(string s) {
    if (s.empty()) {
      return false;
    }
    set<char> tmp;
    bool res = false;
    pair<set<char>::iterator, bool> ans;
    for (auto &&i : s) {
      ans = tmp.insert(i);
      if (ans.second == false) {
        res = true;
        break;
      }
    }
    return res;
  }
  /*暴力解法*/
  int lengthOfLongestSubstring(string s) {
    if (s.size() == 0 || s.size() == 1) return s.size();
    string tmps;
    vector<string> tmpvs;
    for (size_t i = 0; i < s.size() - 1; i++) {
      for (size_t j = i; j < s.size(); j++) {
        for (size_t k = i; k <= j; k++) {
          tmps += s[k];
        }
        if (!subStr_repeat(tmps)) tmpvs.push_back(tmps);
        tmps.clear();
      }
    }

    int maxlen = 0;
    for (auto &&i : tmpvs) {
      maxlen = maxlen < i.size() ? i.size() : maxlen;
    }
    return maxlen;
  }
};

class Solution1 {
 public:
  int lengthOfLongestSubstring(string s) {
    if (s.size() == 0) return 0;
    unordered_set<char> lookup;
    int maxStr = 0;
    int left = 0;
    for (int i = 0; i < s.size(); i++) {
      /*对于s中的每一个字符，在哈希集合中找，哈希集合是不存在重复项的*/
      while (lookup.find(s[i]) != lookup.end()) {
        lookup.erase(s[left]); /*把左窗口的值（重复的那个值）删掉*/
        left++;
      }
      maxStr = max(maxStr, i - left + 1);
      lookup.insert(s[i]);
    }
    return maxStr;
  }
};

class Solution3 {
 public:
  int lengthOfLongestSubstring(string s) {
    const int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; i++) {
      vector<int> seen(128); /*ascii表只有128个字符，每个字符对应一个 int 空间*/
      int j = i;
      /*如果在数组中找不到这字符,就把字符ascii码对应的位置+1，s[j]这里代表数字了，字符的ascii码*/
      while (j < n && !seen[s[j]]) {
        seen[s[j++]]++;
      }
      /*循环结束后j指向的是重复的字符，例如abca，则i=0指向a，j=3指向a，长度是j-i=3*/
      ans = max(ans, j - i);
    }
    return ans;
  }
};

/*hashmap*/

class Solution5 {
 public:
  int lengthOfLongestSubstring(string s) {
    const int n = s.length();
    int ans = 0;
    unordered_map<char, int> idx;
    int left = 0, right = 0;
    for (right = 0; right < n; right++) {
      /*map.find()函数返回元素的位置，如果没找到，就返回 map.end()*/
      /*如果hashmap中有存在值，则说明当前有边界已经存在，需要移动左边界*/
      if (idx.find(s[right]) != idx.end() && idx[s[right]] >= left) {
        left = idx[s[right]] + 1;
      }

      /*
      if (idx.find(s[right]) != idx.end() ) {
        left = max(left,idx[s[right]] + 1);
      //取最大值是防止
      abba这种情况，在right=3的情况下，此时a重复，hashmap中a的位置是0，加1后变成1，则是bba字符串！
      }
      */
      idx[s[right]] = right; /*更新有边界的最新位置*/
      ans = max(ans, right - left + 1);
    }
    return ans;
  }
};

/*桶优化*/
class Solution4 {
 public:
  int lengthOfLongestSubstring(string s) {
    const int n = s.length();
    int ans = 0;
    vector<int> idx(128, -1);
    for (int left = 0, right = 0; right < n; right++) {
      left = max(left, idx[s[right]] + 1); /*更新左边边界的位置*/
      ans = max(ans, right - left + 1);
      idx[s[right]] = right; /*记录右边界的最新位置*/
    }
    return ans;
  }
};

int main(int argc, char const *argv[]) {
  string s = "abcabcbb";
  Solution5 ans;
  /*ASCII表只有128个有效字符*/
  for (size_t i = 0; i < 128; i++) {
    cout << i << " = " << (char)i << endl;
  }

  int max_sub_str_len = ans.lengthOfLongestSubstring(s);
  return 0;
}