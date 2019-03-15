#ifndef FRIEND_H_
#define FRIEND_H_
#include<iostream>
typedef unsigned int unint;
class time
{
    private:
    unsigned int hours;
    unsigned int minutes;
    
    public:
    time();
    time(unint hours,unint minutes);
    void show();
    time add(const time &a,const time &b);
    time operator+(const time &a) const;
    time operator-(const time &a) const;
    time operator*(double a) const;//如果不定义友元函数只能使用time*a的形式，不能用a*time的形式
    void muti(double a);
    void reset(unint a,unint b);
    void addmin(unint a);
    void addhour(unint a);
    friend time operator*(double a,const time & t)//a在前面，time在后面
    //friend time operator*(const time & t,double a)
    {return t*a;}
    friend std::ostream & operator<<(std::ostream & os,const time & t);

};

#endif