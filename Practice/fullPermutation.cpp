#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
using namespace std;
/*
123
1..
2..
3..
*/


int kk = 0;
vector<int> tt;
vector<vector<int> > ttt;
void perm(int a[], int p, int q) { 
  if (p == q) {
    for (int i = 0; i < q + 1; i++) {
      tt.push_back(a[i]);
    }
    ttt.push_back(tt);
    tt.clear();
  }

  for (int i = p; i <= q; i++) {
    swap(a[p], a[i]);   //交换头
    perm(a, p + 1, q);  //头后面的做全排列
    swap(a[p], a[i]);   //还原数组
  }
}

int sha(vector<int> a) {
  int sum = 0;
  vector<int> haha;
  for (int i = 0; i < a.size() - 1; i++) {
    haha.push_back(abs(a[i] - a[i + 1]));
  }
  for (size_t i = 0; i < haha.size(); i++) {
    sum += haha[i];
  }

  return sum;
}

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int a[n];
  int pos;
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  perm(a, 0, n - 1);
  vector<int> ress;
  for (size_t i = 0; i < ttt.size(); i++) {
    ress.push_back(sha(ttt[i]));
  }
  vector<int> ressc=ress;
  sort(ress.begin(),ress.end());
  for (size_t i = 0; i < ressc.size(); i++)
  {
    if (ressc[i]==ress[0])
    {
       pos=i;
    }
    
  }
  vector<int> yanlei=ttt[pos];
  vector<int> yy;
  for (int i = 0; i < yanlei.size()-1; i++)
  {
    yy.push_back(abs(yanlei[i]-yanlei[i+1]));
  }

  sort(yy.begin(),yy.end());
  cout<<yy[0]<<endl;
  return 0;
  
  
}
