#include"Point.hpp"
#include"rectangle_public.hpp"
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    rectangle Rect;
    Rect.initRectangle(2,3,10,10);
    Rect.move(4,5);
    cout<<"date of Rect(x,y,w,h) = "<<endl;
    cout<<Rect.getX()<<endl;//直接使用基类的成员函数
    cout<<Rect.getY()<<endl;
    cout<<Rect.getW()<<endl;
    cout<<Rect.getH()<<endl;

    

    return 0;
}
