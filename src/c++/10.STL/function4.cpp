#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int intArr[] = {30, 90, 30, 40, 70, 50, 20, 80};
    const int N = sizeof(intArr) / sizeof(int);
    vector<int> a(intArr, intArr + N);
    cout << "before sorting:" << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    sort(a.begin(), a.end(), greater<int>()); //降序排序
    cout << "after sorting:" << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    sort(a.begin(), a.end(), less<int>()); //升序排序
    cout << "after sorting:" << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    return 0;
}