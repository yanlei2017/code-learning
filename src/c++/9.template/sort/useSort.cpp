#include <iostream>
using namespace std;
#include "insertSort.hpp"
#include "selectSort.hpp"
#include "bubbleSort.hpp"
int main(int argc, char const *argv[])
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "original a = " << endl;
    for (auto &&i : a)
    {
        cout << i << " ";
    }

    insertSort(a, 10);
    cout << "insert sorted a = " << endl;
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    int b[10] = {5, 6, 9, 2, 4, 3, 1, 8, 1, 0};
    cout << "\n\n\noriginal b = " << endl;
    for (auto &&i : b)
    {
        cout << i << " ";
    }
    selectSort(b, 10);
    cout << "select sorted b = " << endl;
    for (auto &&i : b)
    {
        cout << i << " ";
    }
    int c[8] = {3, 4, 2, 1, 5, 6, 7, 8};
    cout << "\n\noriginal c = " << endl;
    for (auto &&i : c)
    {
        cout << i << " ";
    }
    cout<<endl;
    // bubbleSort(c, 8);
    // betterBubbleSort(c,8);
    bestBubbleSort(c, 8);

    cout << "bubble sorted c = " << endl;
    for (auto &&i : c)
    {
        cout << i << " ";
    }

    return 0;
}
