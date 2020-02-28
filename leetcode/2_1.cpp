/**
 *
 * 2. 两数相加
   我放弃了，自己的思路是把链表解析成数字，然后相加，然后在逆序成链表，
   结果leetcode的测试用例有
    [1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1]
    [5,6,4]
    超过了解析出来的 unsigned long long 的范围了  T_T.
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
 */
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

/*由数组生成题目所需的链表*/
ListNode* generate(int a[], int size) {
  ListNode* ans = new ListNode(0);
  ListNode* p = ans;
  for (size_t i = 0; i < size; i++) {
    p->val = a[i];
    p->next = new ListNode(0);
    p = p->next;
  }
  ListNode* q = ans;
  for (size_t i = 0; i < size - 1; i++) {
    q = q->next;
  }
  q->next = nullptr;
  return ans;
}

/*************************************************************/

class Solution {
 public:
  /*1.链表转换为 vector<string>*/
  long parseListNode(ListNode* arg) {
    long tmp = 0;
    ListNode* p = arg;
    vector<string> str_arg;
    if (arg) {
      while (p->next) {
        str_arg.push_back(to_string(p->val));
        p = p->next;
      }
      str_arg.push_back(to_string(p->val));
    }
    string str;
    for (int i = str_arg.size() - 1; i >= 0; i--) {
      str += str_arg[i];
    }
    return stoll(str);
  }

  /*2.把数字逆序到vector<int>中*/
  void reverse(long num, vector<int>& R) {
    if (num == 0) {
      R.push_back(0);
    } else {
      while (num) {
        R.push_back(num % 10);
        num /= 10;
      }
    }
  }

/*3.用R中的元素填充链表*/
  ListNode* fillListNode(vector<int> R) {
    ListNode* ans = new ListNode(0);
    ListNode* p = ans;
    for (int i = 0; i < R.size(); i++) {
      p->val = R[i];
      p->next = new ListNode(0);
      p = p->next;
    }
    ListNode* q = ans;
    for (size_t i = 0; i < R.size() - 1; i++) {
      q = q->next;
    }
    q->next = nullptr;
    return ans;
  }

  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1 || l2) {
      long num_l1 = parseListNode(l1); /*链表直接转成数字*/
      long num_l2 = parseListNode(l2);
      long sum = num_l1 + num_l2;
      vector<int> R;
      reverse(sum, R);
      ListNode* tmp = fillListNode(R);
      return tmp;
    }
    return nullptr;
  }
};

/*
[0,8,6,5,6,8,3,5,7] 753865680 + 798580876 = 1552446538 >>  7,4,5,6,4,4,2,5,5,1
[6,7,8,0,8,5,8,9,7] 798580876
*/
int main() {
  int a[9] = {0, 8, 6, 5, 6, 8, 3, 5, 7};
  int b[9] = {6, 7, 8, 0, 8, 5, 8, 9, 7};
  ListNode* aa = generate(a, 9);
  ListNode* bb = generate(b, 9);
  Solution sss;
  ListNode* res2 = sss.addTwoNumbers(aa, bb);

  return 0;
}