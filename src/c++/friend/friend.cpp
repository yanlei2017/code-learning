#include <friend.h>
#include <iostream>
using namespace std;

time1::time1():hours(0),minutes(0){}
time1::time1(unint h,unint m)
{
    hours=h;
    minutes=m;
}

void time1::show()
{
    cout<<"hours: "<<hours<<endl;
    cout<<"minutes: "<<minutes<<endl;
}
time1 time1::add(const time1 &a,const time1 &b)
{
    
    this->hours=a.hours+b.hours+(a.minutes+b.minutes)/60;
    this->minutes=(a.minutes+b.minutes)%60;
    return *this;
}
void time1::muti(double a)
{
    unint total_minutes=hours*60*a+minutes*a;
    hours=total_minutes/60;
    minutes=total_minutes%60;
}
void time1::reset(unint a,unint b)
{
    hours=a;
    minutes=b;
}
void time1::addmin(unint a)
{
    minutes+=a;
}
void time1::addhour(unint a)
{
    hours+=a;

}
time1 time1::operator*(double a) const
{
    time1 result;
    unint total_min=hours*60*a+minutes*a;
    result.hours=total_min/60;
    result.minutes=total_min%60;
    return result;
}

time1 time1::operator+(const time1 & a) const
{
    time1 result;
    unint total_min=hours*60+minutes+a.hours*60+a.minutes;
    result.hours=total_min/60;
    result.minutes=total_min % 60;
    return result;

}

time1 time1::operator-(const time1 & a) const
{
    time1 result;
    unint total_min=hours*60+minutes-a.hours*60-a.minutes;
    result.hours=total_min/60;
    result.minutes=total_min % 60;
    return result;
}
std::ostream & operator<<(std::ostream & os,const time1 & t)
{
    os<<t.hours<<" hours "<<endl<<t.minutes<<" minutes "<<endl;
    return os;
}

int main(int argc, char const *argv[])
{
    time1 yanlei(5,30);
    yanlei.show();
    time1 chenxuan(6,75);
    chenxuan.show();
    time1 miya=yanlei+chenxuan;
    miya.show();
    miya=miya*2;
    miya.show();
    miya=2 * miya;//error 2 is not a time1 class
    miya.show();
    system("pause");
    return 0;
}
