#include <iostream>
#include <mutex>
#include <thread>

using namespace std;
int i = 0, j = 0;
mutex w;
void fun1(int &args) {
  w.lock();
  for (size_t i = 0; i < 10000000; i++) args++;
  w.unlock();
}
void fun2(int &args) {
  for (size_t i = 0; i < 10000000; i++) args++;
}
int main() {
  thread th1(fun1, ref(i));
  thread th2(fun1, ref(i));
  th1.join();
  th2.join();
  thread th3(fun2, ref(j));
  thread th4(fun2, ref(j));
  cout << "mutex i = " << i << endl;
  cout << "j = " << j << endl;

  getchar();
  return 0;
}