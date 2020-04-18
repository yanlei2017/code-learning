#include <iostream>
using namespace std;

class base1 final{ //base2无法继承
private:
  /* data */
public:
  base1(/* args */);
  ~base1();
};

base1::base1(/* args */) {}

base1::~base1() {}


class base2 : public base1 {
private:
  /* data */
public:
  base2(/* args */);
  ~base2();
};

base2::base2(/* args */) {}

base2::~base2() {}


class base3
{
private:
    /* data */
public:
    base3(/* args */);
    ~base3();
    virtual void hello() final; //hello函数无法被重写
    virtual void Hello();
};

base3::base3(/* args */)
{
}

base3::~base3()
{
}

class base4:public base3
{
private:
    /* data */
public:
    base4(/* args */);
    ~base4();
    virtual void hello();
    virtual void Hello();
};

base4::base4(/* args */)
{
}

base4::~base4()
{
}



int main(int argc, char const *argv[]) {
  base1 b1;
  base2 b2;
  base3 b3;
  base4 b4;
  return 0;
}
