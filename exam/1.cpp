#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;
void perm(int a[], int p, int q) {
  if (p == q) {
    copy(a, a + q + 1, ostream_iterator<int>(cout, " "));
    cout << endl;
  }

  for (int i = p; i <= q; i++) {
    swap(a[p], a[i]);   //交换头
    perm(a, p + 1, q);  //头后面的做全排列
    swap(a[p], a[i]);   //还原数组
  }
}

/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ 
******************************开始写代码******************************/
int solution(vector < int > arr) {


}
/******************************结束写代码******************************/


int main() {
    int res;

    int _arr_size = 0;
    cin >> _arr_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _arr;
    int _arr_item;
    for(int _arr_i=0; _arr_i<_arr_size; _arr_i++) {
        cin >> _arr_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        _arr.push_back(_arr_item);
    }


    
    res = solution(_arr);
    cout << res << endl;
    
    return 0;

}
