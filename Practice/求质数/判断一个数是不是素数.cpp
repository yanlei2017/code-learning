#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int m;
    cin >> m;
    if (m < 2)
    {
        cout << "False";
    }
    int i;
    for (i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            break;
        }
    }
    if (m == i)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}
