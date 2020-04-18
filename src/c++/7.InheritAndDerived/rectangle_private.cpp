#include"Point.hpp"
#include"rectangle_private.hpp"
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    rectangle Rect;
    Rect.initRectangle(2,3,10,10);
    Rect.move(4,5);
    cout<<"date of Rect(x,y,w,h) = "<<endl;
    cout<<Rect.getXX()<<endl;//通过派生类的成员函数调用基类的成员函数
    cout<<Rect.getYY()<<endl;
    cout<<Rect.getW()<<endl;
    cout<<Rect.getH()<<endl;
    return 0;
}
