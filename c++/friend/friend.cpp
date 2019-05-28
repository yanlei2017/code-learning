#include "friend.h"
#include <iostream>
using namespace std;

time::time()
{
    hours=0;
    minutes=0;
}
time::time(unint h,unint m)
{
    hours=h;
    minutes=m;
}
void time::show()
{
    cout<<"hours: "<<hours<<endl;
    cout<<"minutes: "<<minutes<<endl;
}
time time::add(const time &a,const time &b)
{
    time temp;
    temp.hours=a.hours+b.hours+(a.minutes+b.minutes)/60;
    temp.minutes=(a.minutes+b.minutes)%60;
    return temp;
}
void time::muti(double a)
{
    unint total_minutes=hours*60*a+minutes*a;
    hours=total_minutes/60;
    minutes=total_minutes%60;
}
void time::reset(unint a,unint b)
{
    hours=a;
    minutes=b;
}
void time::addmin(unint a)
{
    minutes+=a;
}
void time::addhour(unint a)
{
    hours+=a;
}
time time::operator*(double a) const
{
    time result;
    unint total_min=hours*60*a+minutes*a;
    result.hours=total_min/60;
    result.minutes=total_min%60;
    return result;
}

time time::operator+(const time & a) const
{
    time result;
    unint total_min=hours*60+minutes+a.hours*60+a.minutes;
    result.hours=total_min/60;
    result.minutes=total_min % 60;
    return result;

}

time time::operator-(const time & a) const
{
    time result;
    unint total_min=hours*60+minutes-a.hours*60-a.minutes;
    result.hours=total_min/60;
    result.minutes=total_min % 60;
    return result;
}
std::ostream & operator<<(std::ostream & os,const time & t)
{
    os<<t.hours<<" hours "<<endl<<t.minutes<<" minutes "<<endl;
    return os;
}
int main(int argc, char const *argv[])
{
    time yanlei(5,30);
    yanlei.show();
    time chenxuan(6,75);
    chenxuan.show();
    time miya=yanlei+chenxuan;
    miya.show();
    miya=miya*2;
    miya.show();
    miya=2 * miya;//error 2 is not a time class
    miya.show();
    system("pause");
    return 0;
}
