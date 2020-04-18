#include <iostream>
#include <string>

using namespace std;

class base1 {
private:
public:
  base1(/* args */);
  virtual void display();
  virtual ~base1();
};

base1::base1(/* args */) { cout << "base1 constructor\n"; }

base1::~base1() { cout << "base1 virtual destructor" << endl; }
void base1::display() { cout << "base1 display \n"; }

class base2 : public base1 {
private:
public:
  base2(/* args */);
  void display();
  virtual ~base2();
};

base2::base2(/* args */) { cout << "base2  constructor\n"; }

base2::~base2() { cout << "base2 virtual destructor " << endl; }
void base2::display() { cout << "base2 display \n"; }

void fun(base1 *p) { p->display(); }

int main(int argc, char const *argv[]) {
  /* code */
  base1 b1;
  base2 b2;
  base1 *b11 = new base2; //创建指针不会创建类对象
  fun(&b1);
  fun(&b2);
  cout << "deleting b11" << endl; //如果base1 的析构函数不申明为virtual
                                  //将只执行base1的析构函数,造成内存泄露
  delete b11;
  cout << "finish deleting b11" << endl;

  return 0;
}
