#include <iostream>
using namespace std;

class base1 {
public:
  int b1;
  base1(int i);
  ~base1();
};

base1::base1(int i) {
  b1 = i;
  cout << "base1 constructor, b1 = " << b1 << endl;
}

base1::~base1() { cout << "base1 destructor" << endl; }

class base2 : virtual public base1 //在第一级继承时就把共同基类base1设计为虚基类
{
public:
  int b2;
  base2(int j);
  ~base2();
};

base2::base2(int j) : base1(j) {
  b2 = j;
  cout << "base2 constructor, b2 = " << b2 << endl;
}

base2::~base2() { cout << "base2 destructor" << endl; }

class base3 : virtual public base1 //在第一级继承时就把共同基类base1设计为虚基类
{
public:
  int b3;
  base3(int x);
  ~base3();
};

base3::base3(int x) : base1(x) {
  b3 = x;
  cout << "base3 constructor, b3 = " << b3 << endl;
}

base3::~base3() { cout << "base3 destructor" << endl; }

class base4 : public base2, public base3 {
  // base2 base3 都继承了base1 , base4 称为最远派生类
public:
  base4(int x);
  ~base4();
};

base4::base4(int x) : base2(5), base3(6), base1(x) {
  cout << "base4 constructor" << endl;
}
//所有 间接或直接 继承虚基类的派生类 都要 在构造函数中给 虚基类构造函数 提供参数
//在建立对象时,只有最远派生类的构造函数调用虚基类的构造函数,其他类对虚基类构造函数的调用将被忽略              

base4::~base4() { cout << "base4 denstructor" << endl; }

int main(int argc, char const *argv[]) {
  base4 B4(0);
  //   B4.b1=0;//二义性 错误
  B4.b2 = 10;
  B4.b3 = 11;
  return 0;
}
