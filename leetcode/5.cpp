/*最长回文子串*/

#include <bits/stdc++.h>
using namespace std;

/*优化后的暴力解法才能AC*/
class Solution {
 public:
  bool isrString(int i, int j, const string &s) {
    if (i == j) {
      return true;
    }
    for (int l = i, r = j; l < r; l++, r--) {
      if (s[l] != s[r]) {
        return false;
      }
    }

    return true;
  }

  string longestPalindrome(string s) {
    if (s.empty()) return string("");

    const int n = s.length();
    string ans;
    int maxlen = 0;
    vector<string> substr;
    for (size_t i = 0; i < n; i++) {
      for (size_t j = i; j < n; j++) {
        if (j - i + 1 > maxlen &&
            isrString(i, j, s)) { /*这里一定先判断当前子串的长度是不是大于maxlen
                                     ，判断回文子串很费时间的*/
          ans = s.substr(i, j - i + 1);
          maxlen = j - i + 1;
        }
      }
    }
    return ans;
  }
};
int main(int argc, char const *argv[]) {
  string s =
      "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedca"
      "nlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpatea"
      "portionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatt"
      "hatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalar"
      "gersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebra"
      "velmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwe"
      "rtoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayhereb"
      "utitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedhe"
      "retotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedIt"
      "isratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromt"
      "hesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelast"
      "pfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavedi"
      "edinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernm"
      "entofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
  Solution ss;
  string ans = ss.longestPalindrome(s);
  return 0;
}