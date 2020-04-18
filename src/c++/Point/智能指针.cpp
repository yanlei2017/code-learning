#include<iostream>
#include<memory>
#include"Point.hpp"
using namespace std;
 int main(int argc, char const *argv[])
 {
     int a;
     shared_ptr<int> p (new int(1));
     cout<<*p<<endl;
     shared_ptr<Point> points(new Point(1,1));
     cout<<points->getX()<<endl;
     return 0;
 }
 