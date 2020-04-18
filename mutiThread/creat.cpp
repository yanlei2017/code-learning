#include <iostream>
#include <thread>
using namespace std;

void fun1(string args) { cout << "thread 1 :" << args << endl; }
void fun2(string& args) {
  args.erase();
  cout << "thread 2 erased args , args = " << args << endl;
}

void sumArgs(int a, int b, int c, int d) {
  cout << "sum of args  = " << a + b + c + d << endl;
}

void add1(int& a) { a++; }

int main() {
  string s = "I am args of fun1 ! \n";
  int num = 0;
  thread t1(fun1, s); /*值传递*/
  t1.join();
  thread t2(fun2, ref(s)); /*引用传递*/
  t2.join();
  thread t3(sumArgs, 1, 2, 3, 4);/*多参数传递*/
  t3.join();
  getchar();
  return 0;
}
