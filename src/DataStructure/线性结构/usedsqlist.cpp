#include <bits/stdc++.h>
#include "dsqlist.hpp"

using namespace std;
int main(int argc, char const *argv[])
{
    dsqlist yanleiT;
    bool creatokT = dsqlistCreatTail(&yanleiT, 5);
    cout << "Tail created list:" << endl;
    dsqlistPrint(&yanleiT);
    dsqlist yanleiH;
    bool creatokH = dsqlistCreatHead(&yanleiH, 5);
    cout << "Head created list:" << endl;
    dsqlistPrintH(&yanleiH);
    cout << "Head created list in real heap:" << endl;
    dsqlistPrint(&yanleiH);
    elemType data;
    bool getelemokT = dsqlistGetelem(&yanleiT, 2, data);
    cout << "Get Tail created list node 2's data = " << data << endl;
    bool getelemokH = dsqlistGetelemH(&yanleiH, 2, data);
    cout << "Get Head created list node 2's data = " << data << endl;

    bool insertok = dsqlistInsert(&yanleiT, 3, 888);
    dsqlistPrint(&yanleiT);
    bool deleteok = dsqlistDeleteAt(&yanleiT, 3);
    dsqlistPrint(&yanleiT);

    int index = 0;
    bool foundok = dsqlistLocate(&yanleiT, index, 2);
    cout << "2 located at node " << index << endl;

    cout << "reverse yanleiH" << endl;
    dsqlistReverse(&yanleiH);
    dsqlistPrint(&yanleiH);

    
    bool deleteokH = dsqlistDelete(&yanleiH);
    bool deleteokT = dsqlistDelete(&yanleiT);

    return 0;
}
