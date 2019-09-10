
/*
链接：https://www.nowcoder.com/questionTerminal/2a2c00e7a88a498693568cef63a4b7bb
来源：牛客网

给定一个可能含有重复值的数组 arr，找到每一个 i 位置左边和右边离 i 位置最近且值比 arr[i] 小的位置。返回所有位置相应的信息。

输入描述:
第一行输入一个数字 n，表示数组 arr 的长度。
以下一行输入 n 个数字，表示数组的值


输出描述:
输出n行，每行两个数字 L 和 R，如果不存在，则值为 -1，下标从 0 开始。
示例1
输入
7
3 4 1 5 6 2 7
输出
-1 2
0 2
-1 -1
2 5
3 5
2 -1
5 -1
*/
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int left, right;
};

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> a(n,-1);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    vector<node> nn(n);
    for (int i = 0; i < n; i++)
    {
        nn[i].left = -1;
        nn[i].right = -1;
    }

    nn[0].left = -1;
    for (int kk = 1; kk < a.size(); kk++)
    {
        if (a[0] > a[kk])
        {
            nn[0].right = kk;
            break;
        }
    }

    nn[a.size() - 1].right = -1;
    for (int kk = a.size() - 2; kk >= 0; kk--)
    {
        if (a[a.size() - 1] > a[kk])
        {
            nn[a.size() - 1].left = kk;
            break;
        }
    }

    for (int i = 1; i < a.size() - 1; i++)
    {

        for (int jj = i - 1; jj >= 0; jj--) /*left*/
        {
            if (a[jj] < a[i])
            {
                nn[i].left = jj;
                break;
            }
        }

        for (int kkk = i + 1; kkk < a.size(); kkk++)/*right*/
        {
            if (a[i] > a[kkk])
            {
                nn[i].right = kkk;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nn[i].left << " " << nn[i].right << endl;
    }
    return 0;
}
