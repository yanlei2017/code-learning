#include <bits/stdc++.h>
using namespace std;
vector<int> inputArr, tempPerm;
vector<vector<int>> fullperm;
void perm(vector<int> a, int p, int q)
{
    if (p == q)
    {
        for (size_t i = 0; i < inputArr.size(); i++)
        {
            tempPerm.push_back(a[i]);
        }
        fullperm.push_back(tempPerm);
        tempPerm.clear();
    }

    for (int i = p; i <= q; i++)
    {
        swap(a[p], a[i]);  //交换头
        perm(a, p + 1, q); //头后面的做全排列
        swap(a[p], a[i]);  //还原数组
    }
}

int main(int argc, char const *argv[])
{
    int index;
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        int temp;
        cin >> temp;
        inputArr.push_back(temp);
    }

    perm(inputArr, 0, index - 1);

    return 0;
}
