#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

template <typename T>
void quickSort(vector<T> &a, int low, int high)
{
    T base;
    int i, j;
    if (low > high)
    {
        return;
    }
    base = a.at(low); //基准数字
    i = low;
    j = high;
    while (i != j)
    {
        while (a.at(j) >= base && i < j) //从右边开始往回找，找到一个比基准数小的数字就停下来
            j--;
        while (a.at(i) <= base && i < j) //从左边开始往后找，找到一个比基准数大的数字就停下来
            i++;
        if (i < j)
            swap(a.at(i), a.at(j));
    }
    a.at(low) = a.at(i);       //基准数和第i个数字交换
    a.at(i) = base;            //基准数放在中间
    quickSort(a, low, i - 1);  //左边递归
    quickSort(a, i + 1, high); //右边递归
}

template <class T>
void Qsort(vector<T> &arr)
{
    quickSort(arr, 0, arr.size() - 1);
}
int main(int argc, char const *argv[])
{

    istream_iterator<double> i1(cin), i2;
    vector<double> s1(i1, i2);
    Qsort(s1);
    for (auto &&i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
