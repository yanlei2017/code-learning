#include "myarray.hpp"

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    myarray yanlei;
    bool wdnmd;
    wdnmd = creatArray(yanlei);
    if (wdnmd)
    {
        cout << "创建成功" << endl;
    }
    else
    {
        cout << "创建失败" << endl;
    }
    bool insertok = false;

    for (int i = 1; i <= 150; i++)
    {
        insertok = insertFront(yanlei, i, i);
        if (insertok)
        {
            cout << "插入成功" << endl;
        }
        else
        {
            cout << "插入失败" << endl;
        }
    }
    printmyarray(yanlei, yanlei.length);

    return 0;
}
