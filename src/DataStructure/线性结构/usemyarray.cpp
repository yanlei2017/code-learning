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

    for (int i = 1; i <= 10; i++)
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
    elemType deletedValue;
    bool deleteok = deleteAt(yanlei, 3, deletedValue);
    if (deleteok)
    {
        cout << "delete success, deleted value = " << deletedValue << endl;
    }
    else
    {
        cout << "delete failed" << endl;
    }
    printmyarray(yanlei, yanlei.length);
    elemType datatobelocated = 6;
    size_t locateindex = locateElem(yanlei, datatobelocated);
    cout << "Data " << datatobelocated << " located at " << locateindex << endl;
    cout << "yanlei.elem[locateindex-1] = " << yanlei.elem[locateindex - 1] << endl;
    elemType elemdata;
    bool getelemok = getElem(yanlei, 5, elemdata);
    if (getelemok)
    {
        cout << "get elelm NO." << 5 << " ok,elem =" << elemdata << endl;
    }
    else
    {
        cout << "get elem failed" << endl;
    }
    
    

    return 0;
}
