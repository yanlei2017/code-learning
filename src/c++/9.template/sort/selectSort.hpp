#pragma once
#include <iostream>
#include <cassert>
using namespace std;
template <class T>
void selectSort(T *arr, int n)
{
    std::cout << "\n选择排序" << endl;
    assert(arr != nullptr && n > 0);
    for (int i = 0; i < n - 1; i++) //逐渐增加只循环到倒数第二个元素
    {
        int leastindex = i;
        for (int j = i + 1; j < n; j++) //从第二个元素开始比较，比较到最后一个元素
        {
            if (arr[j] < arr[leastindex]) //更新最小值下标
                leastindex = j;
        }
        swap(arr[i], arr[leastindex]);
    }
}