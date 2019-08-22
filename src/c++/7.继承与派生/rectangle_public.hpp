#ifndef RECTANGLE_PUBLIC_H_
#define RECTANGLE_PUBLIC_H_
#include"Point.hpp"

//publicc继承
class rectangle : public Point
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
    float getH(){return h;}
    float getW(){return w;}


};

#endif