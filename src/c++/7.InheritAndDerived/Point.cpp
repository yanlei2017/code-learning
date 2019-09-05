#include <iostream>
#include <cassert>
#include "Point.hpp"

using namespace std;
int Point::count = 0;

//Point class
Point::Point(/* args */) : x(0), y(0)
{
    cout << "Default constructor called." << endl;
    count++;
}
Point::Point(float x, float y) : x(x), y(y)
{
    cout << "Constructor Point(int x, int y) called." << endl;
    count++;
}
Point::~Point()
{
    cout << "Destructor called." << endl;
    count--;
}
void Point::move(float newX, float newY)
{
    cout << "Moving point to (" << newX << "," << newY << ")" << endl;
    x = newX;
    y = newY;
}

void Point::showCount()
{
    cout << "Point count =" << count << endl;
}

//ArrayOfPoint class
ArrayOfPoint::ArrayOfPoint(int size) : size(size) //注意初始化类private数据size
{
    points = new Point[size];
}

ArrayOfPoint::~ArrayOfPoint()
{
    cout << "deleting ArrayOfPoint " << endl;
    delete[] points;
}
Point &ArrayOfPoint::element(int index)
{
    assert(0 <= index && index < size);
    return points[index];
}
ArrayOfPoint::ArrayOfPoint(ArrayOfPoint &v) //深层复制构造函数
{
    size=v.size;
    points=new Point[size];//新开辟一块内存空间
    for (auto i = 0; i < size; i++)
    {
        points[i]=v.points[i];
    }
    
}
