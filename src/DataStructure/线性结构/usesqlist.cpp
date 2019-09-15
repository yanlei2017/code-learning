#include <bits/stdc++.h>
using namespace std;
#include "sqlist.hpp"
int main(int argc, char const *argv[])
{
    sqlist yanlei;
    bool creatok = creatSqlistTail(&yanlei, 5);
    if (creatok)
    {
        cout << "creat sqlist sucess" << endl;
        printsqlist(&yanlei);
    }
    else
    {
        cout << "creat sqlist failed" << endl;
    }
    cout << "get node 3" << endl;
    elemType data;
    bool getelemok = getelem(&yanlei, 3, data);
    if (getelemok)
    {
        cout << "node 3 = " << data << endl;
    }
    else
    {
        cout << "get elem failed" << endl;
    }
    bool insertok = insertFront(&yanlei, 3, 888);
    if (insertok)
    {
        cout << "insert 888 at node 3 ok ,now print list" << endl;
        printsqlist(&yanlei);
    }
    elemType deletedData;
    bool deleteElemok = sqlistDelete(&yanlei, 3, deletedData);
    if (deleteElemok)
    {
        cout << "delete elem 3 and get deleted data" << endl;
        cout << "deleted data = " << deletedData << endl;
        cout << "now print list" << endl;
        printsqlist(&yanlei);
    }
    else
    {
        cout << "error occured in deleting " << endl;
    }

    cout << "reverseSqlist using head insert " << endl;

    sqlist *reverse11 = reverseSqlist(&yanlei); /*头插法翻转*/
    printsqlist(reverse11);
    cout << "reverseSqlist with head,origin list  =" << endl;
    printsqlist(&yanlei);
    cout << "reversing....." << endl;
    // reverseSqlistWithHead(&yanlei);
    sqlist * yanleir=reverse(&yanlei);
    printsqlist(yanleir);

    cout << "deleting sqlist" << endl;
    bool clearok = clearSqlist(&yanlei);
    if (clearok)
    {
        cout << "clear ok" << endl;
    }

    return 0;
}
