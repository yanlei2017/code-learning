#include<iostream>
#include"Point.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
    ArrayOfPoint points0(2);
    ArrayOfPoint points1(points0);
    cout<<"points0: ("<<points0.element(1).getX()<<","<<points0.element(1).getY()<<")"<<endl;
    cout<<"points1: ("<<points1.element(1).getX()<<","<<points1.element(1).getY()<<")\nmove points0"<<endl;
    points0.element(1).move(3,5);
    cout<<"points0: ("<<points0.element(1).getX()<<","<<points0.element(1).getY()<<")"<<endl;
    cout<<"points1: ("<<points1.element(1).getX()<<","<<points1.element(1).getY()<<")"<<endl;
    return 0;
}
