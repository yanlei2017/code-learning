#include <iostream>
using namespace std;

class base1
{
private:
    /* data */
public:
    base1(int i);
    ~base1();
};

base1::base1(int i)
{
    cout << "base1 constructor" << endl;
}

base1::~base1()
{
    cout << "base1 destructor" << endl;
}

class base2:virtual public base1
{
private:
    /* data */
public:
    base2(int j);
    ~base2();
};

base2::base2(int j):base1(j)
{
    cout << "base2 constructor" << endl;
}

base2::~base2()
{
    cout << "base2 destructor" << endl;
}

class base3:virtual public base1
{
private:
    /* data */
public:
    base3(int x);
    ~base3();
};

base3::base3(int x):base1(x)
{
    cout << "base3 constructor" << endl;

}

base3::~base3()
{
    cout << "base3 destructor" << endl;

}

class base4 :public base2,public base3
{
private:
    // base1 member1;
    // base2 member2;
    // base3 member3;

public:
    base4(int x);
    ~base4();
};

base4::base4(int x):base2(x),base3(x),base1(x)
{
    cout << "base4 constructor" << endl;
}

base4::~base4()
{
    cout << "base4 denstructor" << endl;
}

int main(int argc, char const *argv[])
{
    base4 B4(1);
    return 0;
}

