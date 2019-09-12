#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
vector<int> inputArr, tempPerm;
set<vector<int>> fullperm;

int main(int argc, char const *argv[])
{
    int index;
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        int temp;
        cin >> temp;
        inputArr.push_back(temp);
    }
    tempPerm = inputArr;
    for (size_t j = 0; j < inputArr.size(); j++)
    {
        tempPerm.erase(tempPerm.begin() + j);/*依次删除一个元素得到新的待插入数组*/
        vector<int>::iterator it = tempPerm.begin();
        for (size_t i = 0; i < inputArr.size(); i++)
        {
            tempPerm.insert(it, inputArr[j]);
            it++;
            fullperm.insert(tempPerm);
            tempPerm.erase(it - 1);
        }
        tempPerm = inputArr;/*恢复原来的数组*/
=======
class a {
 private:
  /* data */
 public:
  a(/* args */);
  ~a();
  void p() { cout << "a p" << endl; }
  virtual void vp() { cout << "v a p" << endl; }
};

a::a(/* args */) {}

a::~a() {}

class b : public a {
 private:
  /* data */
 public:
  b(/* args */);
  ~b();
  void p() { cout << "b p" << endl; }
  virtual void vp() { cout << "v b p" << endl; }
};

b::b(/* args */) {}

b::~b() {}

int main(int argc, char const *argv[]) {
  static char str[100];
  cout << strlen(str) << endl;
  a * ss=new b;
  ss->p();
  ss->vp();
  return 0;
>>>>>>> 8211f5df8cd7b401f7302b8d6fba32c8b8bb3091
}
