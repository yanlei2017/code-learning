#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void heapify(int tree[], int n, int i)
{
    if (i >= n)
    {
        return;
    }

    int left = 2 * i + 1;                   /*i节点的左孩子*/
    int right = 2 * i + 2;                  /*i节点的右孩子*/
    int max = i;                            /*最大节点的位置*/
    if (left < n && tree[left] > tree[max]) /*left right不能超出节点最大个数*/
    {
        max = left;
    }
    if (right < n && tree[right] > tree[max])
    {
        max = right;
    }
    if (max != i) /*如果2个孩子节点有比当前节点(父节点)大的*/
    {
        swap(tree, max, i);
        heapify(tree, n, max);
    }
}

void build_heap(int tree[], int n)
{
    int last_node = n - 1;            /*最后一个节点*/
    int parent = (last_node - 1) / 2; /*最后一个节点的父节点依次往上都要建堆*/
    for (int i = parent; i >= 0; i--)
    {
        heapify(tree, n, i);
    }
}

void heap_sort(int tree[], int n)
{
    build_heap(tree, n);             /*建大堆，顶部元素最大*/
    for (int i = n - 1; i >= 0; i--) /*i在不断减小，有序的区域为数组的后部 x~n */
    {
        swap(tree, i, 0);    /*最后一个节点和根节点交换*/
        heapify(tree, i, 0); /*对根节点做heapify*/
    }
}

int main(int argc, char const *argv[])
{
    int tree[8] = {10, 8, 23, 46, 123, 12, 1, 0};
    int n = 8;
    heap_sort(tree, 8);
    for (auto &&i : tree)
    {
        cout << i << " ";
    }

    return 0;
}
