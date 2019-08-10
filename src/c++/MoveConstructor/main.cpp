#include <iostream>
#include "IntNum.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    IntNum A(5);
    // IntNum B = GetNum();
    cout << A.getint() << endl;
    cout << GetNum().getint() << endl;
    A.ChangeNum(6);
    cout << A.getint() << endl;
    // cout << B.getint() << endl;
    return 0;
}
