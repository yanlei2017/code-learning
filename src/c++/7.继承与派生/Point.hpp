#ifndef __POINT__H 
#define __POINT__H

class Point
{
private:
    float x;
    float y;
public:
    static int count;
    Point(/* args */);
    Point(float x, float y);
    ~Point();
    void move(float newX, float newY);
    float getX() const { return x; }
    float getY() const { return y; }
    static void showCount();
    inline void initpoint(float x ,float y){
        x=x;
        y=y;
    }
};

class ArrayOfPoint
{
private:
    Point *points;
    int size;

public:
    ArrayOfPoint(int size);
    ~ArrayOfPoint();
    Point &element(int index);
    ArrayOfPoint(ArrayOfPoint & ArrayOfPoint);
};
#endif

