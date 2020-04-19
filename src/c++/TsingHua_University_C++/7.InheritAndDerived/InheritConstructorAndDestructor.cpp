#include <iostream>
using namespace std;

class base1 {
private:
  /* data */
  int b1;

public:
  base1(int i);
  ~base1();
};

base1::base1(int i) {
  b1 = i;
  cout << "base1 constructor, b1 = " << b1 << endl;
}

base1::~base1() { cout << "base1 destructor" << endl; }

class base2 {
private:
  /* data */
  int b2;

public:
  base2(int j);
  ~base2();
};

base2::base2(int j) {
  b2 = j;
  cout << "base2 constructor, b2 = " << b2 << endl;
}

base2::~base2() { cout << "base2 destructor" << endl; }

class base3 {
private:
  /* data */
  int b3;

public:
  base3(/* args */);
  ~base3();
};

base3::base3(/* args */) { cout << "base3 constructor, b3 = " << b3 << endl; }

base3::~base3() { cout << "base3 destructor" << endl; }

class base4 : public base1, public base2, public base3 {
private:
  base2 member2;//成员按照这里的顺序来初始化
  base1 member1;
  base3 member3;

public:
  base4(int a, int b, int c, int d);
  ~base4();
};

base4::base4(int a, int b, int c, int d)//按照class定义里被继承的顺序调用构造函数,相反的顺序调用析构函数
    : base2(a), member2(a), member1(b), base1(b) {
  cout << "base4 constructor" << endl;
}

base4::~base4() { cout << "base4 destructor" << endl; }

int main(int argc, char const *argv[]) {
  base4 B4(1, 2, 3, 4);
  return 0;
}
