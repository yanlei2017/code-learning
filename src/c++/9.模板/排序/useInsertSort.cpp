#include <iostream>
using namespace std;
#include "insertSort.hpp"
#include "selectSort.hpp"
int main(int argc, char const *argv[])
{
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "original a = " << endl;
    for (auto &&i : a)
    {
        cout << i << " ";
    }

    insertSort(a, 10);
    cout << "\ninsert sorted a = " << endl;
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    int b[10] = {5, 6, 9, 2, 4, 3, 1, 8, 1, 0};
    cout << "\noriginal b = " << endl;
    for (auto &&i : b)
    {
        cout << i << " ";
    }
    selectSort(b, 10);
    cout << "\nselect sorted a = " << endl;
    for (auto &&i : b)
    {
        cout << i << " ";
    }

    return 0;
}
