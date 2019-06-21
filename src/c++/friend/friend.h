#ifndef FRIEND_H_
#define FRIEND_H_
#include<iostream>
typedef unsigned int unint;
class time1
{
    private:
    unsigned int hours;
    unsigned int minutes;
        mutable int  yanlei;
    
    public:
    time1();
    time1(unint hours,unint minutes);
    void show();
    time1 add(const time1 &a,const time1 &b);
    time1 operator+(const time1 &a) const;
    time1 operator-(const time1 &a) const;
    time1 operator*(double a) const;//如果不定义友元函数只能使用time1*a的形式，不能用a*time1的形式
    void muti(double a);
    void reset(unint a,unint b);
    void addmin(unint a);
    void addhour(unint a);
    friend time1 operator*(double a,const time1 & t)//a在前面，time1在后面
    //friend time1 operator*(const time1 & t,double a)
    {return t*a;}
    friend std::ostream & operator<<(std::ostream & os,const time1 & t);
    std::string::size_type
};

#endif