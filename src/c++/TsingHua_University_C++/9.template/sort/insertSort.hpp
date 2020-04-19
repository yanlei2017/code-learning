#pragma once
#include <iostream>
#include <cassert>
using namespace std;
template <class T>
void insertSort(T *arr, int n)
{
    std::cout<<"\n插入排序"<<endl;

    assert(arr != nullptr && n > 0);
    int i,j;
        for ( i = 1; i < n; i++)//从数组的第二个元素开始
    {
         j = i;
        T temp = arr[i];//存储当前待比较元素
        while (j > 0 && temp < arr[j - 1])//如果当前待比较的元素比前一个数小
        {
            arr[j] = arr[j - 1];//前一个数往后移动
            j--;//序号往前移动，直到找到比当前待比较元素小的
        }
        arr[j] = temp;//把当前待比较元素插入到j位置
    }
}