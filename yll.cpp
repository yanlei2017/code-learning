#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<vector<int>> zuhe(vector<int> in, int target)
{ //target 是希望选择M个作组合,in是选择的范围，长度为N
    vector<vector<int>> output;
    for (int i = 0; i < pow(2, in.size()); i++)
    {
        int temp = 0, count = 0;
        vector<int> weishu;
        for (int j = 0; j < in.size(); j++)
        {
            if ((i & (1 << j)) != 0)
            {
                weishu.push_back(j);
                count++;
            } //找出二进制为1的位数以及它们的位置
        }
        if (count == target)
        { //位数等于M
            vector<int> one_case;
            for (int j = 0; j < count; j++)
            {
                temp = in.size() - 1 - weishu[j];
                one_case.push_back(in[temp]);
            }
            output.push_back(one_case);
        }
    }
    return output;
}
int main()
{
    vector<vector<int>> output;
    int n;
    int m;
    cin >> n >> m;
    vector<int> hh;
    for (int i = 1; i <= n; i++)
    {
        hh.push_back(i);
        /* code */
    }

    // vector<int> in = {1, 2, 3, 4};
    output = zuhe(hh, m);
    // for (auto i : output)
    // {
    //     for (auto j : i)
    //         cout << j << ' ';
    //     cout << endl;
    // }
    int size = output.size();
    int res = size % 1000000007;
    cout << res << endl;
    return 0;
}
