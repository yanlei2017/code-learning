#include <cstdlib>
#include <iostream>

using namespace std;

struct student {
  int id;
  float gpa;
};

template <class T> class store {
private:
  /* data */
  T item; //用于存放任意类型的数据
  bool haveValue;

public:
  store(/* args */);
  T &getElem();
  void putElem(const T &x);
};

template <class T> store<T>::store() : haveValue(false) {}
template <class T> T &store<T>::getElem() {
  if (!haveValue) {
    cout << "NO item present !" << endl;
    exit(1);
  }
  return item;
}

template <class T> void store<T>::putElem(const T &x)
{
    haveValue=true;
    item=x;
}

int main(int argc, char const *argv[]) {
  store<int> s1, s2;
  s1.putElem(3);
  s2.putElem(-1);
  cout << s1.getElem() << " " << s2.getElem() << endl;
  student g = {1000, 4.0};
  store<student> s3;
  s3.putElem(g);
  cout << "student id = " << s3.getElem().id << endl;
  store<double> d;
  cout << d.getElem() << endl;
  return 0;
}
