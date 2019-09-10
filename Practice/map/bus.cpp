#include <bits/stdc++.h>

using namespace std;

int dfs(vector<int> cc)
{
    for (int i = 0; i < cc.size(); i++)
    {
        int tmp = cc[0];
        if ((cc[i] - tmp) > 30)
        {
            count30++;
            tmp = cc[i];
        }

        /* code */
    }
}

int cost1, cost7, cost30;
int count30, count7, count1;
int main(int argc, char const *argv[])
{
    int tmp;
    vector<int> days;
    while (cin >> tmp)
    {
        days.push_back(tmp);
        /* code */
    }
    sort(days.begin(), days.end());

    return 0;
}
