
#include <iostream>
using namespace std;
int main()
{
    int m, n, i, count = 0;
    cout << "请随机输入一个正整数：";
    cin >> n;
    for (m = 2; m <= n; m++)
    {
        for (i = 2; i < m; i++)
            if (m % i == 0)
                break;
        if (m == i)
        {
            cout << m << ' ';
        }
    }
    return 0;
}