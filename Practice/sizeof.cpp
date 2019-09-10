#include <bits/stdc++.h>

using namespace std;

int getsize(int a[])
{

    return sizeof(a);
}
int main(int argc, char const *argv[])
{

    int a[] = {1, 2, 3, 4, 5};
    cout << sizeof(a) << endl;
    int *b = a;
    cout << sizeof(b) << endl;
    int c = getsize(a);/*数组退化为指针*/
    cout << c << endl;
    return 0;
}
