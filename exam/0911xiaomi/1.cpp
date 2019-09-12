#include <bits/stdc++.h>
using namespace std;
class a {
 private:
  /* data */
 public:
  a(/* args */);
  ~a();
  void p() { cout << "a p" << endl; }
  virtual void vp() { cout << "v a p" << endl; }
};

a::a(/* args */) {}

a::~a() {}

class b : public a {
 private:
  /* data */
 public:
  b(/* args */);
  ~b();
  void p() { cout << "b p" << endl; }
  virtual void vp() { cout << "v b p" << endl; }
};

b::b(/* args */) {}

b::~b() {}

int main(int argc, char const *argv[]) {
  static char str[100];
  cout << strlen(str) << endl;
  a * ss=new b;
  ss->p();
  ss->vp();
  return 0;
}
