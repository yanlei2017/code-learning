/*
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<node> nn(n);
    for (int i = 0; i < n; i++)
    {
        nn[i].left = -1;
        nn[i].right = -1;
    }
    for (int index = 0; index < n - 1; index++)
    {
        int fix = a[index];
        for (int j = index + 1; j < n; j++)
        {
            if (a[j] < fix)
            {
                nn[index].right = j;
                break;
            }
        }
    }
    for (int indexx = n - 1; indexx > 0; indexx--)
    {
        int fixx = a[indexx];
        for (int jj = indexx - 1; jj >= 0; jj--)
        {
            if (a[jj] < fixx)
            {
                nn[indexx].left = jj;
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
