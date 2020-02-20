#include <iostream>
using namespace std;

class IntNum {
 public:
  IntNum(int x = 0) : xptr(new int(x)) {  //构造函数
    cout << "Calling constructor..." << endl;
  }


  IntNum(const IntNum &n) : xptr(new int(*n.xptr)) {  //复制构造函数

    cout << "Calling copy constructor..." << endl;
  };

  IntNum(IntNum &&n) : xptr(n.xptr) {  //移动构造函数
    n.xptr = nullptr;                  //记得释放原对象的地址
    cout << "Calling move constructor " << endl;
  }

  ~IntNum() {  //析构函数

    delete xptr;

    cout << "Destructing..." << endl;
  }

  int getInt() { return *xptr; }

 private:
  int *xptr;
};

//返回值为IntNum类对象

IntNum getNum() {
  IntNum a;
  return a;  // a是局部变量，即将消亡的对象，右值
             // 返回需要调用复制构造函数，或者移动构造函数
}

int main() {
  int *p = new int(
      getNum()
          .getInt());  //首先调用getNum,调用IntNum构造函数构造a,a是非静态局部变量，
  //返回时需要调用复制构造函数复制给临时对象xx，这里调用复制构造函数可以用移动构造函数优化，避免复制，
  //直接把a的变量地址赋值给临时对象xx的变量地址，就完成了移动构造函数，然后调用
  //临时对象xx.getInt() , 在执行完这一行代码时候，再调用析构函数,销毁临时对象xx.
  cout << *p << endl;
  return 0;
}
