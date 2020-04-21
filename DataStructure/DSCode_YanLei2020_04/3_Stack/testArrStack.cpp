#include "arrStack.h"
#include "myStack.h"
int main(int argc, char const *argv[]) {
  arrStack<int> ss(10);
  cout<<"Stack push 0~4"<<endl;
  for (int i = 0; i < 5; i++) {
    ss.push(i);
  }
  ss.printArrStack();
  int top = 0;
  ss.topVal(top);
  cout << "Stack top = " << top << endl;
  ss.pop(top);
  cout << "Stack pop" << endl;
  ss.printArrStack();
 
  string stop;
  cin >> stop;
  return 0;
}
