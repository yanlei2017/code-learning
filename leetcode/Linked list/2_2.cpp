/*
  2. 两数相加
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
/*使用哑结点来简化代码。如果没有哑结点，则必须编写额外的条件语句来初始化表头的值。
哑结点其实就是放在第一个存放数据结点之前、头指针之后的结点。它没有实际意义。
好处:由于每个非空节点都有一个前驱,这是一种减少列表处理所需特殊情况的方法*/
class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0); /*dummyHead是哑结点*/
    ListNode *p = l1, *q = l2, *curr = dummyHead;
    int carry = 0;/*进位，只能是0 和 1*/
    while (p != nullptr || q != nullptr) {
      int x = (p != nullptr) ? p->val : 0;
      int y = (q != nullptr) ? q->val : 0;
      int sum = carry + x + y;
      carry = sum / 10;
      curr->next = new ListNode(sum % 10);
      curr = curr->next;
      if (p != nullptr) p = p->next;
      if (q != nullptr) q = q->next;
    }
    if (carry > 0) { /*最后一次的进位是1的话，还需要增加1*/
      curr->next = new ListNode(carry);
    }
    return dummyHead->next;
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