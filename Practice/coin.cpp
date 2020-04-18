
#include <bits/stdc++.h>

using namespace std;
int n, cost, f[100];

int main(int argc, char const *argv[])
{
    f[0] = 0;
    cin >> n;
    vector<vector<int>> s(n, vector<int>(3) = {0, 0, 0});

    for (int i = 1; i < n; i++)
    {
        cost = INFINITY;
        if (i - 1 >= 0)
        {
            cost = min(cost, f[i - 1] + 1);
            s[i][0]++;
        }

        if (i - 5 >= 0)
        {
            cost = min(cost, f[i - 5] + 1);
            s[i][1]++;
        }

        if (i - 15 >= 0)
        {
            cost = min(cost, f[i - 11] + 1);
            s[i][2]++;
        }

        f[i] = cost;

        cout << "f[" << i << "] = " << f[i] << endl;
        cout << i << " = "
             << "1*" << s[i][0] << " + 5*" << s[i][1] << " + 11*" << s[i][2] << endl;
    }

    return 0;
}