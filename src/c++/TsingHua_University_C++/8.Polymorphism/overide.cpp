#include <iostream>
using namespace std;

class base1 {
private:
  /* data */
public:
  base1(/* args */);
  ~base1();
  virtual void display();
};

base1::base1(/* args */) {}

base1::~base1() {}

void base1::display() { cout << "base1 display\n"; }

class base2 : public base1 {
private:
  /* data */
public:
  base2(/* args */);
  ~base2();
  virtual void display() override;//确保在基类中能找到display函数并重写
};

base2::base2(/* args */) {}

base2::~base2() {}

void base2::display() { cout << "base2 display\n"; }

int main(int argc, char const *argv[]) {
  base1 b1;
  b1.display();
  base2 b2;
  b2.display();
  return 0;
}
