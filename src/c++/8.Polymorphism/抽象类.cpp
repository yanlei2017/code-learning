#include <iostream>
#include <string>

using namespace std;

class base1 {
public:
  base1(/* args */);
  virtual void display() = 0;//抽象基类,不能产生对象了
  virtual ~base1();
};

base1::base1(/* args */) { cout << "base1 constructor\n"; }

base1::~base1() { cout << "base1 destructor" << endl; }
void base1::display() { cout << "base1 display \n"; }

class base2 : public base1 {
private:
  /* data */
public:
  base2(/* args */);
  virtual void display(); //这里的virtual也可以不写,因为在基类中写了

  ~base2();
};

base2::base2(/* args */) { cout << "base2 constructor\n"; }

base2::~base2() { cout << "base2 destructor " << endl; }
void base2::display() { cout << "base2 display \n"; }

class base3 : public base2 {
private:
  /* data */
public:
  base3(/* args */);
  ~base3();
  void display();
};

base3::base3(/* args */) { cout << "base3 constructor\n"; }

base3::~base3() { cout << "base3 destructor " << endl; }
void base3::display() { cout << "base3 display " << endl; }

void fun(base1 *p) { p->display(); }

int main(int argc, char const *argv[]) {
  /* code */
  // base1 b1;
  base2 b2;
  base3 b3;
  base1 *b11; //创建指针不会创建类对象
  fun(&b2);
  fun(&b3);

  return 0;
}
