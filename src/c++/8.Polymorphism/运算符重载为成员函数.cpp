#include <iostream>
using namespace std;
class Clock
{
private:
  int hour, minute, second;

public:
  Clock(int hour, int minute, int second);
  Clock &operator++();//前置++
  Clock operator++(int);//后置++,此处的形参不能使用，仅作为后置++的标识符
  void showtime();

  ~Clock();
};

Clock::Clock(int hour, int minute, int second)
{
  if (0 <= hour && hour <= 24 && 0 <= minute && minute <= 60 && 0 <= second && second <= 60)
  {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
  }
  else
  {
    int count = 0; //时间溢出计数
    while (!(0 <= second && second <= 60))
    {
      second = (second - 60) % 60;
      count++;
    }
    this->second = second;
    minute = minute + count;
    count = 0;

    while (!(0 <= minute && minute <= 60))
    {
      minute = (minute - 60) % 60;
      count++;
    }
    this->minute = minute;
    hour = hour + count;
    count = 0;
    while (!(0 <= hour && hour <= 24))
    {
      hour = (hour - 24) % 24;
    }
    this->hour = hour;
    count = 0;
  }
  cout << "Time initialized at  " << this->hour << ":" << this->minute << ":"
       << this->second << endl;
}
Clock &Clock::operator++()
{
  this->hour += 1;
  this->minute += 1;
  this->second += 1;
  if (this->hour > 24)
  {
    this->hour %= 24;
  }
  if (this->minute > 60)
  {
    this->minute %= 60;
  }
  if (this->second > 60)
  {
    this->second %= 60;
  }
  return *this;
}
Clock Clock::operator++(int)
{
  Clock old = *this;
  ++(*this);
  return old;
}
void Clock::showtime()
{
  cout << "Time is " << this->hour << ":" << this->minute << ":" << this->second << endl;
}

Clock::~Clock() {}

int main(int, char **)
{
  cout << "Please input initial time \n";
  cout << "Please inpunt hour" << endl;
  unsigned int hour;
  cin >> hour;
  cout << "Please inpunt minute" << endl;
  unsigned int minute;
  cin >> minute;
  cout << "Please inpunt second" << endl;
  unsigned int second;
  cin >> second;
  Clock time1(hour, minute, second);
  time1++;
  time1.showtime();
}
