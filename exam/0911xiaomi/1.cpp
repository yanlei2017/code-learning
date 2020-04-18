#include <bits/stdc++.h>
using namespace std;
vector<int> inputArr, tempPerm;
set<vector<int>> fullperm;

void perm(vector<int> a, int p, int q)
{
    if (p == q)
    {
        for (int i = 0; i < q + 1; i++)
        {
            tempPerm.push_back(a[i]);
        }
        fullperm.insert(tempPerm);
        tempPerm.clear();
    }
    for (int i = p; i <= q; i++)
    {
        swap(a[p], a[i]);  //交换头
        perm(a, p + 1, q); //头后面的做全排列
        swap(a[p], a[i]);  //还原数组
    }
}

int findminpos(vector<int> a)
{
    int min = a[0];
    for (int i = 0; i < a.size(); ++i)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    int j = 0;
    for (j; j < a.size(); j++)
        if (a[j] == min)
        {
            break;
        }
    return j;
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
    perm(inputArr, 0, index - 1); /*数组全排列*/

    // for (size_t j = 0; j < inputArr.size(); j++)
    // {
    //     tempPerm.erase(tempPerm.begin() + j); /*依次删除一个元素得到新的待插入数组*/
    //     vector<int>::iterator it = tempPerm.begin();
    //     for (size_t i = 0; i < inputArr.size(); i++)
    //     {
    //         tempPerm.insert(it, inputArr[j]);
    //         it++;
    //         fullperm.insert(tempPerm);
    //         tempPerm.erase(it - 1);
    //     }
    //     tempPerm = inputArr; /*恢复原来的数组*/
    // }
    vector<int> cd, mindistance;
    vector<int> temp;
    vector<vector<int>> res;
    set<vector<int>>::iterator its = fullperm.begin();

    for (its; its != fullperm.end(); its++)
    {
        temp = *its;
        res.push_back(temp); /*把set中的数组复制一份*/
        for (size_t i = 0; i < temp.size() - 1; i++)
        {
            cd.push_back(abs(temp[i] - temp[i + 1])); /*计算相邻距离*/
        }
        int ss = 0;
        for (size_t i = 0; i < cd.size(); i++)
        {
            ss += cd[i];
        }
        cd.clear();
        mindistance.push_back(ss); /*所有数组排列的最小距离*/
    }
    int pos = findminpos(mindistance); /*找到总距离最小排列的位置*/
    int result = 0;
    for (size_t i = 0; i < res[pos].size(); i++)
    {
        if (res[pos][i] != inputArr[i])
        {
            result++;
        }
    }
    if (result % 2 != 0)/*不相等个数是奇数*/
    {
        result++;
    }

    cout << "最小排列：";
    for (auto &&i : res[pos])
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "最小移动次数 = " << result / 2 << endl;
}