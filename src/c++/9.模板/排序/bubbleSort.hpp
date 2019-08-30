#pragma once
using namespace std;

template <class T>
void bubbleSort(T *arr, int length)
{
    int sortCount = 0;
    cout << "\n冒泡排序\n";
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                sortCount++;
                myswap(arr[j], arr[j + 1]);
            }
            sortCount++;
            for (int i = 0; i < length; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "第" << sortCount << "次排序" << endl;
        }
    }
}
template <class T>
void betterBubbleSort(T *arr, int length)
{
    int sortCount = 0;
    cout << "\n带isSorted标志冒泡排序\n";
    for (int i = 0; i < length - 1; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                myswap(arr[j], arr[j + 1]);
                isSorted = false;
            }
            sortCount++;
            for (int i = 0; i < length; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "第" << sortCount << "次排序" << endl;
        }
        if (isSorted)
            break;
    }
}

template <class T>
void bestBubbleSort(T *arr, int length)
{
    int sortCount = 0;
    cout << "带isSorted标志和有序区间判定的冒泡排序" << endl;
    int lastExchangeIndex = 0;       //记录上次交换发生的位置
    int unsortedBorder = length - 1; //无序数列的边界，每次只需要比较到这里就可以
    for (int i = 0; i < length; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < unsortedBorder; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                myswap(arr[j], arr[j + 1]);
                isSorted = false;
                lastExchangeIndex = j;
            }
            sortCount++;
            for (int k = 0; k < length; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "第 " << sortCount << "次排序" << endl;
        }
        unsortedBorder = lastExchangeIndex;
        if (isSorted)
            break;
    }
}