#include <bits/stdc++.h>
using namespace std;
vector<int> inputArr, tempPerm;
set<vector<int>> fullperm;

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
    tempPerm = inputArr;
    for (size_t j = 0; j < inputArr.size(); j++)
    {
        tempPerm.erase(tempPerm.begin() + j);/*依次删除一个元素得到新的待插入数组*/
        vector<int>::iterator it = tempPerm.begin();
        for (size_t i = 0; i < inputArr.size(); i++)
        {
            tempPerm.insert(it, inputArr[j]);
            it++;
            fullperm.insert(tempPerm);
            tempPerm.erase(it - 1);
        }
        tempPerm = inputArr;/*恢复原来的数组*/
}
