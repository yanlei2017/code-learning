#ifndef RECTANGLE_PRIVATE_H_
#define RECTANGLE_PRIVATE_H_
#include"Point.hpp"

//private继承
class rectangle : private Point
{
private:
    float h,w;
public:
    rectangle(/* args */) {}
    ~rectangle() {}
    void initRectangle(float x, float y, float w, float h){
        Point::initpoint(x,y);
        this->h=h;
        this->w=w;
    }
    void move(float x, float y){
        Point::move(x,y);
    }
    float getH(){return h;}
    float getW(){return w;}
    float getXX(){return getX();} //如果派生类的函数和基类的函数重名，要在基类上面加类名
    float getYY(){return getY();}
};

#endif