#include <iostream>
#include "IntNum.hpp"
using namespace std;

IntNum::IntNum(int x = 0) : xptr(new int(x))
{
    cout << "calling constructor" << endl;
}
IntNum::~IntNum()
{
    delete xptr;
    cout << "calling destructor..." << endl;
}

IntNum::IntNum( IntNum &v) : xptr(new int(*v.xptr))
{
    cout << "calling copy constructor " << endl;
}

IntNum::IntNum(IntNum &&n) : xptr(n.xptr) //移动构造函数
{
    n.xptr = nullptr;
    cout << "Calling move constructor..." << endl;
}

void IntNum::ChangeNum(int x){
    *xptr=x;
}

int IntNum::getint()
{
    return *xptr;
}

IntNum GetNum()
{
    IntNum a;
    return a;
}