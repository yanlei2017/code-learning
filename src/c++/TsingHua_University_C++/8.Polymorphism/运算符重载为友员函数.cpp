#include <iostream>
using namespace std;

class complex {
private:
  double real;
  double imag;

public:
  complex(double r, double i);
  friend complex operator+(const complex &c1, const complex &c2);
  friend complex operator+(const int &c1, const complex &c2);
  friend complex operator+(const complex &c1, const int &c2);

  friend complex operator-(const complex &c1, const complex &c2);
  friend complex operator-(const int &c1, const complex &c2);
  friend complex operator-(const complex &c1, const int &c2);

  friend ostream &operator<<(ostream &out, const complex &c);
};

complex::complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

complex operator+(const complex &c1, const complex &c2) {
  return complex(c1.real + c2.real, c1.imag + c2.imag);
}
complex operator+(const int &c1, const complex &c2) {
  return complex(c1 + c2.real, c2.imag);
}

complex operator+(const complex &c1, const int &c2) {
  return complex(c1.real + c2, c1.imag);
}


complex operator-(const complex &c1, const complex &c2) {
  return complex(c1.real - c2.real, c1.imag - c2.imag);
}
complex operator-(const int &c1, const complex &c2) {
  return complex(c1 - c2.real, c2.imag);
}

complex operator-(const complex &c1, const int &c2) {
  return complex(c1.real - c2, c1.imag);
}
ostream &operator<<(ostream &out, const complex &c) {
  out << "(" << c.real << "," << c.imag << ")";
  return out;
}

int main(int argc, char const *argv[]) {
  complex c1(1, 1), c2(2, 2), c3;
  int a=5;
  cout << "c1 = " << c1 << endl;
  cout << "c2 = " << c2 << endl;
  cout << "c1 + c2 = " << c1 + c2 << endl;
  cout << "c1 - c2 = " << c1 - c2 << endl;
  cout << "c1 +  5 = " << c1 +a << endl;
  cout << " 5 + c1 = " << a+c1 << endl;
  cout << "c1 -  5 = " << c1 -a << endl;
  cout << " 5 - c1 = " << a-c1 << endl;

  return 0;
}
