/*合并有序链表*/

#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

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

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* ans = new ListNode(-1);
    ListNode* pans = ans;
    ListNode* pl1 = l1;
    ListNode* pl2 = l2;
    while (pl1 && pl2) {
      if (pl1->val == pl2->val) {
        pans->next = new ListNode(pl1->val);
        pans = pans->next;
        pans->next = new ListNode(pl1->val);
        pans = pans->next;
        pl1 = pl1->next;
        pl2 = pl2->next;
        continue;
      }
      if (pl1 && pl2 && pl1->val < pl2->val) {
        pans->next = new ListNode(pl1->val);
        pans = pans->next;
        pl1 = pl1->next;
      }
      if (pl1 && pl2 && pl1->val > pl2->val) {
        pans->next = new ListNode(pl2->val);
        pans = pans->next;
        pl2 = pl2->next;
      }
    }

    while (pl2) {
      pans->next = new ListNode(pl2->val);
      pans = pans->next;
      pl2 = pl2->next;
    }

    while (pl1) {
      pans->next = new ListNode(pl1->val);
      pans = pans->next;
      pl1 = pl1->next;
    }

    return ans->next;
  }
};

int main(int argc, char const* argv[]) {
  int a[3] = {1, 2, 4};
  int b[3] = {1, 3, 4};
  int c[1] = {0};
  ListNode* aa = generate(a, 3);
  ListNode* bb = generate(b, 3);
  ListNode* cc = generate(c, 1);

  Solution s;
  //   ListNode* ans = s.mergeTwoLists(aa, bb);
  ListNode* ans = s.mergeTwoLists(nullptr, cc);
  return 0;
}
