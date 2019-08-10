#include<iostream>
#include"Point.hpp"
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "input point array size" << endl;
    int count;
    cin >> count;
    ArrayOfPoint points(count);
    for (size_t i = 0; i < count; i++)
    {
        cout<<"("<<points.element(i).getX()<<","<<points.element(i).getY()<<")"<<endl;
    }
    
    points.element(2).move(7, 7);
    points.element(1).move(8, 8);
    for (size_t i = 0; i < count; i++)
    {
        cout<<"("<<points.element(i).getX()<<","<<points.element(i).getY()<<")"<<endl;
    }
    
    return 0;
}
